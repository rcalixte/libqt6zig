const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html)
pub const QBuffer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBuffer,

    pub const _is_QBuffer = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBuffer object in C++ memory
    ///
    pub fn new() QBuffer {
        return .{ .ptr = qtc.QBuffer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QBuffer {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBuffer_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn metaObject(self: QBuffer) QMetaObject {
        return .{ .ptr = qtc.QBuffer_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBuffer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBuffer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    pub fn superMetaObject(self: QBuffer) QMetaObject {
        return .{ .ptr = qtc.QBuffer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBuffer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBuffer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBuffer, callback: *const fn (QBuffer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBuffer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBuffer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBuffer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBuffer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBuffer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBuffer, callback: *const fn (QBuffer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBuffer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBuffer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBuffer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBuffer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `buffer` instead
    ///
    pub const Buffer = buffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#buffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buffer(self: QBuffer, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QBuffer_Buffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.buffer: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `buffer2` instead
    ///
    pub const Buffer2 = buffer2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#buffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buffer2(self: QBuffer, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QBuffer_Buffer2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.buffer2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: []u8 `
    ///
    pub fn setData(self: QBuffer, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QBuffer_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `setData2` instead
    ///
    pub const SetData2 = setData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn setData2(self: QBuffer, _data: [:0]const u8, len: isize) void {
        const data_Cstring = _data.ptr;
        qtc.QBuffer_SetData2(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: QBuffer, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QBuffer_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: QBuffer, _openMode: i32) bool {
        return qtc.QBuffer_Open(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpen(self: QBuffer, callback: *const fn (QBuffer, i32) callconv(.c) bool) void {
        qtc.QBuffer_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: QBuffer, _openMode: i32) bool {
        return qtc.QBuffer_SuperOpen(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn close(self: QBuffer) void {
        qtc.QBuffer_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClose(self: QBuffer, callback: *const fn () callconv(.c) void) void {
        qtc.QBuffer_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superClose(self: QBuffer) void {
        qtc.QBuffer_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn size(self: QBuffer) i64 {
        return qtc.QBuffer_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#size)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onSize(self: QBuffer, callback: *const fn () callconv(.c) i64) void {
        qtc.QBuffer_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#size)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superSize(self: QBuffer) i64 {
        return qtc.QBuffer_SuperSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn pos(self: QBuffer) i64 {
        return qtc.QBuffer_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPos` instead
    ///
    pub const OnPos = onPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#pos)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onPos(self: QBuffer, callback: *const fn () callconv(.c) i64) void {
        qtc.QBuffer_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPos` instead
    ///
    pub const SuperPos = superPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#pos)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superPos(self: QBuffer) i64 {
        return qtc.QBuffer_SuperPos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` off: i64 `
    ///
    pub fn seek(self: QBuffer, off: i64) bool {
        return qtc.QBuffer_Seek(@ptrCast(self.ptr), @bitCast(off));
    }

    /// ### DEPRECATED: Use `onSeek` instead
    ///
    pub const OnSeek = onSeek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#seek)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, off: i64) callconv(.c) bool `
    ///
    pub fn onSeek(self: QBuffer, callback: *const fn (QBuffer, i64) callconv(.c) bool) void {
        qtc.QBuffer_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSeek` instead
    ///
    pub const SuperSeek = superSeek;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#seek)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` off: i64 `
    ///
    pub fn superSeek(self: QBuffer, off: i64) bool {
        return qtc.QBuffer_SuperSeek(@ptrCast(self.ptr), @bitCast(off));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn atEnd(self: QBuffer) bool {
        return qtc.QBuffer_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAtEnd` instead
    ///
    pub const OnAtEnd = onAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onAtEnd(self: QBuffer, callback: *const fn () callconv(.c) bool) void {
        qtc.QBuffer_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAtEnd` instead
    ///
    pub const SuperAtEnd = superAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superAtEnd(self: QBuffer) bool {
        return qtc.QBuffer_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn canReadLine(self: QBuffer) bool {
        return qtc.QBuffer_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanReadLine` instead
    ///
    pub const OnCanReadLine = onCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCanReadLine(self: QBuffer, callback: *const fn () callconv(.c) bool) void {
        qtc.QBuffer_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanReadLine` instead
    ///
    pub const SuperCanReadLine = superCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superCanReadLine(self: QBuffer) bool {
        return qtc.QBuffer_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: QMetaMethod `
    ///
    pub fn connectNotify(self: QBuffer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaMethod;
        qtc.QBuffer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, param1: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBuffer, callback: *const fn (QBuffer, QMetaMethod) callconv(.c) void) void {
        qtc.QBuffer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBuffer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaMethod;
        qtc.QBuffer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBuffer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaMethod;
        qtc.QBuffer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, param1: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBuffer, callback: *const fn (QBuffer, QMetaMethod) callconv(.c) void) void {
        qtc.QBuffer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` param1: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBuffer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMetaMethod;
        qtc.QBuffer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readData(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QBuffer_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn onReadData(self: QBuffer, callback: *const fn (QBuffer, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QBuffer_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn superReadData(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QBuffer_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn writeData(self: QBuffer, _data: [:0]const u8, len: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QBuffer_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, data: [*:0]const u8, len: i64) callconv(.c) i64 `
    ///
    pub fn onWriteData(self: QBuffer, callback: *const fn (QBuffer, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QBuffer_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn superWriteData(self: QBuffer, _data: [:0]const u8, len: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QBuffer_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBuffer.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBuffer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openMode` instead
    ///
    pub const OpenMode = openMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openMode(self: QBuffer) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextModeEnabled` instead
    ///
    pub const SetTextModeEnabled = setTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTextModeEnabled(self: QBuffer, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isTextModeEnabled` instead
    ///
    pub const IsTextModeEnabled = isTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn isTextModeEnabled(self: QBuffer) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn isOpen(self: QBuffer) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn isReadable(self: QBuffer) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn isWritable(self: QBuffer) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readChannelCount` instead
    ///
    pub const ReadChannelCount = readChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn readChannelCount(self: QBuffer) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeChannelCount` instead
    ///
    pub const WriteChannelCount = writeChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn writeChannelCount(self: QBuffer) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentReadChannel` instead
    ///
    pub const CurrentReadChannel = currentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn currentReadChannel(self: QBuffer) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentReadChannel` instead
    ///
    pub const SetCurrentReadChannel = setCurrentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentReadChannel(self: QBuffer, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `currentWriteChannel` instead
    ///
    pub const CurrentWriteChannel = currentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn currentWriteChannel(self: QBuffer) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentWriteChannel` instead
    ///
    pub const SetCurrentWriteChannel = setCurrentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentWriteChannel(self: QBuffer, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read2(self: QBuffer, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAll` instead
    ///
    pub const ReadAll = readAll;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAll(self: QBuffer, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.readAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readLine` instead
    ///
    pub const ReadLine = readLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `readLine2` instead
    ///
    pub const ReadLine2 = readLine2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readLine2(self: QBuffer, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.readLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startTransaction` instead
    ///
    pub const StartTransaction = startTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn startTransaction(self: QBuffer) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn commitTransaction(self: QBuffer) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn rollbackTransaction(self: QBuffer) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransactionStarted` instead
    ///
    pub const IsTransactionStarted = isTransactionStarted;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn isTransactionStarted(self: QBuffer) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn write(self: QBuffer, _data: [:0]const u8, len: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]const u8 `
    ///
    pub fn write2(self: QBuffer, _data: [:0]const u8) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// ### DEPRECATED: Use `write3` instead
    ///
    pub const Write3 = write3;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: []u8 `
    ///
    pub fn write3(self: QBuffer, _data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `peek` instead
    ///
    pub const Peek = peek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `peek2` instead
    ///
    pub const Peek2 = peek2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek2(self: QBuffer, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `skip` instead
    ///
    pub const Skip = skip;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skip(self: QBuffer, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `ungetChar` instead
    ///
    pub const UngetChar = ungetChar;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` c: u8 `
    ///
    pub fn ungetChar(self: QBuffer, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `putChar` instead
    ///
    pub const PutChar = putChar;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` c: u8 `
    ///
    pub fn putChar(self: QBuffer, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `getChar` instead
    ///
    pub const GetChar = getChar;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn getChar(self: QBuffer, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QBuffer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBuffer.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readyRead` instead
    ///
    pub const ReadyRead = readyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn readyRead(self: QBuffer) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadyRead` instead
    ///
    pub const OnReadyRead = onReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer) callconv(.c) void `
    ///
    pub fn onReadyRead(self: QBuffer, callback: *const fn (QBuffer) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelReadyRead` instead
    ///
    pub const ChannelReadyRead = channelReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` channel: i32 `
    ///
    pub fn channelReadyRead(self: QBuffer, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `onChannelReadyRead` instead
    ///
    pub const OnChannelReadyRead = onChannelReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, channel: i32) callconv(.c) void `
    ///
    pub fn onChannelReadyRead(self: QBuffer, callback: *const fn (QBuffer, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesWritten` instead
    ///
    pub const BytesWritten = bytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` bytes: i64 `
    ///
    pub fn bytesWritten(self: QBuffer, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onBytesWritten` instead
    ///
    pub const OnBytesWritten = onBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, bytes: i64) callconv(.c) void `
    ///
    pub fn onBytesWritten(self: QBuffer, callback: *const fn (QBuffer, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelBytesWritten` instead
    ///
    pub const ChannelBytesWritten = channelBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn channelBytesWritten(self: QBuffer, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onChannelBytesWritten` instead
    ///
    pub const OnChannelBytesWritten = onChannelBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn onChannelBytesWritten(self: QBuffer, callback: *const fn (QBuffer, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn aboutToClose(self: QBuffer) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: QBuffer, callback: *const fn (QBuffer) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readChannelFinished` instead
    ///
    pub const ReadChannelFinished = readChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn readChannelFinished(self: QBuffer) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadChannelFinished` instead
    ///
    pub const OnReadChannelFinished = onReadChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer) callconv(.c) void `
    ///
    pub fn onReadChannelFinished(self: QBuffer, callback: *const fn (QBuffer) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLine1` instead
    ///
    pub const ReadLine1 = readLine1;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine1(self: QBuffer, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBuffer.readLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
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
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBuffer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBuffer.objectName: Memory allocation failed");
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
    /// ` self: QBuffer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBuffer, name: []const u8) void {
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
    /// ` self: QBuffer `
    ///
    pub fn isWidgetType(self: QBuffer) bool {
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
    /// ` self: QBuffer `
    ///
    pub fn isWindowType(self: QBuffer) bool {
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
    /// ` self: QBuffer `
    ///
    pub fn isQuickItemType(self: QBuffer) bool {
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
    /// ` self: QBuffer `
    ///
    pub fn signalsBlocked(self: QBuffer) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBuffer, b: bool) bool {
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
    /// ` self: QBuffer `
    ///
    pub fn thread(self: QBuffer) QThread {
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
    /// ` self: QBuffer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBuffer, _thread: anytype) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBuffer, interval: i32) i32 {
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
    /// ` self: QBuffer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBuffer, time: i64) i32 {
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
    /// ` self: QBuffer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBuffer, id: i32) void {
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
    /// ` self: QBuffer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBuffer, id: i32) void {
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
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBuffer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBuffer.children: Memory allocation failed");
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
    /// ` self: QBuffer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBuffer, _parent: anytype) void {
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
    /// ` self: QBuffer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBuffer, filterObj: anytype) void {
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
    /// ` self: QBuffer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBuffer, obj: anytype) void {
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
    /// ` self: QBuffer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBuffer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBuffer `
    ///
    pub fn disconnect3(self: QBuffer) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBuffer, receiver: anytype) bool {
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
    /// ` self: QBuffer `
    ///
    pub fn dumpObjectTree(self: QBuffer) void {
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
    /// ` self: QBuffer `
    ///
    pub fn dumpObjectInfo(self: QBuffer) void {
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
    /// ` self: QBuffer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBuffer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBuffer, name: [:0]const u8) QVariant {
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
    /// ` self: QBuffer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBuffer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBuffer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBuffer.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBuffer `
    ///
    pub fn bindingStorage(self: QBuffer) QBindingStorage {
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
    /// ` self: QBuffer `
    ///
    pub fn bindingStorage2(self: QBuffer) QBindingStorage {
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
    /// ` self: QBuffer `
    ///
    pub fn destroyed(self: QBuffer) void {
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
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBuffer, callback: *const fn (QBuffer) callconv(.c) void) void {
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
    /// ` self: QBuffer `
    ///
    pub fn parent(self: QBuffer) QObject {
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
    /// ` self: QBuffer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBuffer, classname: [:0]const u8) bool {
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
    /// ` self: QBuffer `
    ///
    pub fn deleteLater(self: QBuffer) void {
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
    /// ` self: QBuffer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBuffer, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBuffer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBuffer, time: i64, timerType: i32) i32 {
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
    /// ` self: QBuffer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBuffer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBuffer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBuffer, signal: [:0]const u8) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBuffer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBuffer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBuffer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBuffer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBuffer, param1: anytype) void {
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
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBuffer, callback: *const fn (QBuffer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn isSequential(self: QBuffer) bool {
        return qtc.QBuffer_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superIsSequential(self: QBuffer) bool {
        return qtc.QBuffer_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSequential(self: QBuffer, callback: *const fn () callconv(.c) bool) void {
        qtc.QBuffer_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn reset(self: QBuffer) bool {
        return qtc.QBuffer_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superReset(self: QBuffer) bool {
        return qtc.QBuffer_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReset(self: QBuffer, callback: *const fn () callconv(.c) bool) void {
        qtc.QBuffer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn bytesAvailable(self: QBuffer) i64 {
        return qtc.QBuffer_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBytesAvailable` instead
    ///
    pub const SuperBytesAvailable = superBytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superBytesAvailable(self: QBuffer) i64 {
        return qtc.QBuffer_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesAvailable` instead
    ///
    pub const OnBytesAvailable = onBytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesAvailable(self: QBuffer, callback: *const fn () callconv(.c) i64) void {
        qtc.QBuffer_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn bytesToWrite(self: QBuffer) i64 {
        return qtc.QBuffer_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    pub fn superBytesToWrite(self: QBuffer) i64 {
        return qtc.QBuffer_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesToWrite(self: QBuffer, callback: *const fn () callconv(.c) i64) void {
        qtc.QBuffer_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForReadyRead(self: QBuffer, msecs: i32) bool {
        return qtc.QBuffer_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` msecs: i32 `
    ///
    pub fn superWaitForReadyRead(self: QBuffer, msecs: i32) bool {
        return qtc.QBuffer_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, msecs: i32) callconv(.c) bool `
    ///
    pub fn onWaitForReadyRead(self: QBuffer, callback: *const fn (QBuffer, i32) callconv(.c) bool) void {
        qtc.QBuffer_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForBytesWritten(self: QBuffer, msecs: i32) bool {
        return qtc.QBuffer_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` msecs: i32 `
    ///
    pub fn superWaitForBytesWritten(self: QBuffer, msecs: i32) bool {
        return qtc.QBuffer_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, msecs: i32) callconv(.c) bool `
    ///
    pub fn onWaitForBytesWritten(self: QBuffer, callback: *const fn (QBuffer, i32) callconv(.c) bool) void {
        qtc.QBuffer_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLineData` instead
    ///
    pub const ReadLineData = readLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLineData(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QBuffer_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadLineData` instead
    ///
    pub const SuperReadLineData = superReadLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn superReadLineData(self: QBuffer, _data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = _data.ptr;
        return qtc.QBuffer_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadLineData` instead
    ///
    pub const OnReadLineData = onReadLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn onReadLineData(self: QBuffer, callback: *const fn (QBuffer, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QBuffer_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `skipData` instead
    ///
    pub const SkipData = skipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skipData(self: QBuffer, maxSize: i64) i64 {
        return qtc.QBuffer_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `superSkipData` instead
    ///
    pub const SuperSkipData = superSkipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn superSkipData(self: QBuffer, maxSize: i64) i64 {
        return qtc.QBuffer_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onSkipData` instead
    ///
    pub const OnSkipData = onSkipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn onSkipData(self: QBuffer, callback: *const fn (QBuffer, i64) callconv(.c) i64) void {
        qtc.QBuffer_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBuffer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBuffer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBuffer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBuffer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBuffer, callback: *const fn (QBuffer, QEvent) callconv(.c) bool) void {
        qtc.QBuffer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBuffer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBuffer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBuffer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBuffer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBuffer, callback: *const fn (QBuffer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBuffer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBuffer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBuffer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBuffer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBuffer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBuffer, callback: *const fn (QBuffer, QTimerEvent) callconv(.c) void) void {
        qtc.QBuffer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBuffer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBuffer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBuffer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBuffer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBuffer, callback: *const fn (QBuffer, QChildEvent) callconv(.c) void) void {
        qtc.QBuffer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBuffer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBuffer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBuffer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBuffer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBuffer, callback: *const fn (QBuffer, QEvent) callconv(.c) void) void {
        qtc.QBuffer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOpenMode` instead
    ///
    pub const SetOpenMode = setOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: QBuffer, _openMode: i32) void {
        qtc.QBuffer_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `superSetOpenMode` instead
    ///
    pub const SuperSetOpenMode = superSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: QBuffer, _openMode: i32) void {
        qtc.QBuffer_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onSetOpenMode` instead
    ///
    pub const OnSetOpenMode = onSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn onSetOpenMode(self: QBuffer, callback: *const fn (QBuffer, i32) callconv(.c) void) void {
        qtc.QBuffer_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorString` instead
    ///
    pub const SetErrorString = setErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: QBuffer, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QBuffer_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `superSetErrorString` instead
    ///
    pub const SuperSetErrorString = superSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBuffer `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: QBuffer, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QBuffer_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `onSetErrorString` instead
    ///
    pub const OnSetErrorString = onSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: QBuffer, callback: *const fn (QBuffer, [*:0]const u8) callconv(.c) void) void {
        qtc.QBuffer_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    pub fn sender(self: QBuffer) QObject {
        return .{ .ptr = qtc.QBuffer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBuffer `
    ///
    pub fn superSender(self: QBuffer) QObject {
        return .{ .ptr = qtc.QBuffer_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBuffer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBuffer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    pub fn senderSignalIndex(self: QBuffer) i32 {
        return qtc.QBuffer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBuffer `
    ///
    pub fn superSenderSignalIndex(self: QBuffer) i32 {
        return qtc.QBuffer_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBuffer, callback: *const fn () callconv(.c) i32) void {
        qtc.QBuffer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBuffer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBuffer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBuffer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBuffer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBuffer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBuffer, callback: *const fn (QBuffer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBuffer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBuffer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBuffer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBuffer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBuffer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBuffer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBuffer`
    ///
    /// ` callback: *const fn (self: QBuffer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBuffer, callback: *const fn (QBuffer, QMetaMethod) callconv(.c) bool) void {
        qtc.QBuffer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBuffer `
    ///
    /// ` callback: *const fn (self: QBuffer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBuffer, callback: *const fn (QBuffer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#dtor.QBuffer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBuffer `
    ///
    pub fn delete(self: QBuffer) void {
        qtc.QBuffer_Delete(@ptrCast(self.ptr));
    }
};
