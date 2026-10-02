const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQmlParserStatus = @import("libqt6").QQmlParserStatus;
const QQuick3DObject = @import("libqt6").QQuick3DObject;
const QQuick3DObject__ItemChangeData = @import("libqt6").QQuick3DObject__ItemChangeData;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquick3dobject_enums = @import("libqquick3dobject.zig").enums;
const qquick3dtexturedata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html)
pub const QQuick3DTextureData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DTextureData,

    pub const _is_QQuick3DTextureData = {};
    pub const _is_QQuick3DObject = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DTextureData object in C++ memory
    ///
    pub fn new() QQuick3DTextureData {
        return .{ .ptr = qtc.QQuick3DTextureData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DTextureData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuick3DObject `
    ///
    pub fn new2(_parent: anytype) QQuick3DTextureData {
        comptime _ = @TypeOf(_parent)._is_QQuick3DObject;
        return .{ .ptr = qtc.QQuick3DTextureData_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn metaObject(self: QQuick3DTextureData) QMetaObject {
        return .{ .ptr = qtc.QQuick3DTextureData_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) QMetaObject) void {
        qtc.QQuick3DTextureData_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn superMetaObject(self: QQuick3DTextureData) QMetaObject {
        return .{ .ptr = qtc.QQuick3DTextureData_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuick3DTextureData, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DTextureData_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuick3DTextureData_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuick3DTextureData, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DTextureData_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuick3DTextureData, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DTextureData_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuick3DTextureData_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuick3DTextureData, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DTextureData_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuick3DTextureData_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DTextureData.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textureData` instead
    ///
    pub const TextureData = textureData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#textureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textureData(self: QQuick3DTextureData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QQuick3DTextureData_TextureData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QQuick3DTextureData.textureData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextureData` instead
    ///
    pub const SetTextureData = setTextureData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setTextureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` data: []u8 `
    ///
    pub fn setTextureData(self: QQuick3DTextureData, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DTextureData_SetTextureData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn size(self: QQuick3DTextureData) QSize {
        return .{ .ptr = qtc.QQuick3DTextureData_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSize(self: QQuick3DTextureData, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QQuick3DTextureData_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn depth(self: QQuick3DTextureData) i32 {
        return qtc.QQuick3DTextureData_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDepth` instead
    ///
    pub const SetDepth = setDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _depth: i32 `
    ///
    pub fn setDepth(self: QQuick3DTextureData, _depth: i32) void {
        qtc.QQuick3DTextureData_SetDepth(@ptrCast(self.ptr), @bitCast(_depth));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ## Returns:
    ///
    /// ` qquick3dtexturedata_enums.Format `
    ///
    pub fn format(self: QQuick3DTextureData) i32 {
        return qtc.QQuick3DTextureData_Format(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _format: qquick3dtexturedata_enums.Format `
    ///
    pub fn setFormat(self: QQuick3DTextureData, _format: i32) void {
        qtc.QQuick3DTextureData_SetFormat(@ptrCast(self.ptr), @bitCast(_format));
    }

    /// ### DEPRECATED: Use `hasTransparency` instead
    ///
    pub const HasTransparency = hasTransparency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#hasTransparency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn hasTransparency(self: QQuick3DTextureData) bool {
        return qtc.QQuick3DTextureData_HasTransparency(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHasTransparency` instead
    ///
    pub const SetHasTransparency = setHasTransparency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setHasTransparency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _hasTransparency: bool `
    ///
    pub fn setHasTransparency(self: QQuick3DTextureData, _hasTransparency: bool) void {
        qtc.QQuick3DTextureData_SetHasTransparency(@ptrCast(self.ptr), _hasTransparency);
    }

    /// ### DEPRECATED: Use `textureDataNodeDirty` instead
    ///
    pub const TextureDataNodeDirty = textureDataNodeDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#textureDataNodeDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn textureDataNodeDirty(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_TextureDataNodeDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextureDataNodeDirty` instead
    ///
    pub const OnTextureDataNodeDirty = onTextureDataNodeDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#textureDataNodeDirty)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onTextureDataNodeDirty(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DTextureData_Connect_TextureDataNodeDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markAllDirty` instead
    ///
    pub const MarkAllDirty = markAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#markAllDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn markAllDirty(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_MarkAllDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAllDirty` instead
    ///
    pub const OnMarkAllDirty = onMarkAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#markAllDirty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onMarkAllDirty(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnMarkAllDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMarkAllDirty` instead
    ///
    pub const SuperMarkAllDirty = superMarkAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#markAllDirty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn superMarkAllDirty(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_SuperMarkAllDirty(@ptrCast(self.ptr));
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
        var _str = qtc.QQuick3DTextureData_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DTextureData.tr2: Memory allocation failed");
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
        var _str = qtc.QQuick3DTextureData_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DTextureData.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QQuick3DObject
    ///
    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn asQQmlParserStatus(self: QQuick3DTextureData) QQmlParserStatus {
        return .{ .ptr = qtc.QQuick3DObject_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Inherited from QQuick3DObject
    ///
    /// Downcasts to a QQuick3DTextureData object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuick3DTextureData {
        comptime _ = @TypeOf(_qqmlparserstatus)._is_QQmlParserStatus;
        return .{ .ptr = @ptrCast(qtc.QQuick3DObject_FromQQmlParserStatus(@ptrCast(_qqmlparserstatus.ptr))) };
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuick3DTextureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuick3DObject_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DTextureData.state: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuick3DTextureData, _state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        qtc.QQuick3DObject_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuick3DTextureData, allocator: std.mem.Allocator) []QQuick3DObject {
        const _arr: qtc.libqt_list = qtc.QQuick3DObject_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuick3DObject, _arr.len) catch @panic("QQuick3DTextureData.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QQuick3DObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn parentItem(self: QQuick3DTextureData) QQuick3DObject {
        return .{ .ptr = qtc.QQuick3DObject_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn update(self: QQuick3DTextureData) void {
        qtc.QQuick3DObject_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _parentItem: QQuick3DObject `
    ///
    pub fn setParentItem(self: QQuick3DTextureData, _parentItem: anytype) void {
        comptime _ = @TypeOf(_parentItem)._is_QQuick3DObject;
        qtc.QQuick3DObject_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parentItem.ptr));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn parentChanged(self: QQuick3DTextureData) void {
        qtc.QQuick3DObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn childrenChanged(self: QQuick3DTextureData) void {
        qtc.QQuick3DObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn stateChanged(self: QQuick3DTextureData) void {
        qtc.QQuick3DObject_StateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuick3DTextureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DTextureData.objectName: Memory allocation failed");
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuick3DTextureData, name: []const u8) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn isWidgetType(self: QQuick3DTextureData) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn isWindowType(self: QQuick3DTextureData) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn isQuickItemType(self: QQuick3DTextureData) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn signalsBlocked(self: QQuick3DTextureData) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuick3DTextureData, b: bool) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn thread(self: QQuick3DTextureData) QThread {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuick3DTextureData, _thread: anytype) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuick3DTextureData, interval: i32) i32 {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuick3DTextureData, time: i64) i32 {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuick3DTextureData, id: i32) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuick3DTextureData, id: i32) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuick3DTextureData, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuick3DTextureData.children: Memory allocation failed");
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuick3DTextureData, _parent: anytype) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuick3DTextureData, filterObj: anytype) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuick3DTextureData, obj: anytype) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuick3DTextureData, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn disconnect3(self: QQuick3DTextureData) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuick3DTextureData, receiver: anytype) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn dumpObjectTree(self: QQuick3DTextureData) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn dumpObjectInfo(self: QQuick3DTextureData) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuick3DTextureData, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuick3DTextureData, name: [:0]const u8) QVariant {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuick3DTextureData, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuick3DTextureData.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuick3DTextureData.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn bindingStorage(self: QQuick3DTextureData) QBindingStorage {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn bindingStorage2(self: QQuick3DTextureData) QBindingStorage {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn destroyed(self: QQuick3DTextureData) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn parent(self: QQuick3DTextureData) QObject {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuick3DTextureData, classname: [:0]const u8) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn deleteLater(self: QQuick3DTextureData) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuick3DTextureData, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuick3DTextureData, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuick3DTextureData, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuick3DTextureData, signal: [:0]const u8) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuick3DTextureData, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuick3DTextureData, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuick3DTextureData, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuick3DTextureData, param1: anytype) void {
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn itemChange(self: QQuick3DTextureData, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DTextureData_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuick3DTextureData, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DTextureData_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, param1: qquick3dobject_enums.ItemChange, param2: QQuick3DObject__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, i32, QQuick3DObject__ItemChangeData) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `classBegin` instead
    ///
    pub const ClassBegin = classBegin;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn classBegin(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_ClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClassBegin` instead
    ///
    pub const SuperClassBegin = superClassBegin;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn superClassBegin(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_SuperClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClassBegin` instead
    ///
    pub const OnClassBegin = onClassBegin;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentComplete` instead
    ///
    pub const ComponentComplete = componentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn componentComplete(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_ComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superComponentComplete` instead
    ///
    pub const SuperComponentComplete = superComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn superComponentComplete(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_SuperComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentComplete` instead
    ///
    pub const OnComponentComplete = onComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSync` instead
    ///
    pub const PreSync = preSync;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn preSync(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_PreSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPreSync` instead
    ///
    pub const SuperPreSync = superPreSync;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn superPreSync(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_SuperPreSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreSync` instead
    ///
    pub const OnPreSync = onPreSync;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData) callconv(.c) void `
    ///
    pub fn onPreSync(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnPreSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuick3DTextureData, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DTextureData_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQuick3DTextureData, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DTextureData_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DTextureData_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuick3DTextureData, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DTextureData_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuick3DTextureData, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DTextureData_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DTextureData_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuick3DTextureData, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DTextureData_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuick3DTextureData, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DTextureData_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QTimerEvent) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuick3DTextureData, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DTextureData_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuick3DTextureData, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DTextureData_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QChildEvent) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuick3DTextureData, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DTextureData_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuick3DTextureData, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DTextureData_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QEvent) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuick3DTextureData, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DTextureData_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuick3DTextureData, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DTextureData_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuick3DTextureData, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DTextureData_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuick3DTextureData, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DTextureData_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DTextureData`
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DTextureData_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isComponentComplete` instead
    ///
    pub const IsComponentComplete = isComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn isComponentComplete(self: QQuick3DTextureData) bool {
        return qtc.QQuick3DTextureData_IsComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn sender(self: QQuick3DTextureData) QObject {
        return .{ .ptr = qtc.QQuick3DTextureData_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DTextureData `
    ///
    pub fn senderSignalIndex(self: QQuick3DTextureData) i32 {
        return qtc.QQuick3DTextureData_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuick3DTextureData, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuick3DTextureData_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuick3DTextureData, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuick3DTextureData_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DTextureData `
    ///
    /// ` callback: *const fn (self: QQuick3DTextureData, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuick3DTextureData, callback: *const fn (QQuick3DTextureData, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#dtor.QQuick3DTextureData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DTextureData `
    ///
    pub fn delete(self: QQuick3DTextureData) void {
        qtc.QQuick3DTextureData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#public-types)
pub const enums = struct {
    pub const Format = enum {
        pub const None: i32 = 0;
        pub const RGBA8: i32 = 1;
        pub const RGBA16F: i32 = 2;
        pub const RGBA32F: i32 = 3;
        pub const RGBE8: i32 = 4;
        pub const R8: i32 = 5;
        pub const R16: i32 = 6;
        pub const R16F: i32 = 7;
        pub const R32F: i32 = 8;
        pub const BC1: i32 = 9;
        pub const BC2: i32 = 10;
        pub const BC3: i32 = 11;
        pub const BC4: i32 = 12;
        pub const BC5: i32 = 13;
        pub const BC6H: i32 = 14;
        pub const BC7: i32 = 15;
        pub const DXT1_RGBA: i32 = 16;
        pub const DXT1_RGB: i32 = 17;
        pub const DXT3_RGBA: i32 = 18;
        pub const DXT5_RGBA: i32 = 19;
        pub const ETC2_RGB8: i32 = 20;
        pub const ETC2_RGB8A1: i32 = 21;
        pub const ETC2_RGBA8: i32 = 22;
        pub const ASTC_4x4: i32 = 23;
        pub const ASTC_5x4: i32 = 24;
        pub const ASTC_5x5: i32 = 25;
        pub const ASTC_6x5: i32 = 26;
        pub const ASTC_6x6: i32 = 27;
        pub const ASTC_8x5: i32 = 28;
        pub const ASTC_8x6: i32 = 29;
        pub const ASTC_8x8: i32 = 30;
        pub const ASTC_10x5: i32 = 31;
        pub const ASTC_10x6: i32 = 32;
        pub const ASTC_10x8: i32 = 33;
        pub const ASTC_10x10: i32 = 34;
        pub const ASTC_12x10: i32 = 35;
        pub const ASTC_12x12: i32 = 36;
    };
};
