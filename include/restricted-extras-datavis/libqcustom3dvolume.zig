const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQuaternion = @import("libqt6").QQuaternion;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const qimage_enums = @import("../libqimage.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html)
pub const QCustom3DVolume = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCustom3DVolume,

    pub const _is_QCustom3DVolume = {};
    pub const _is_QCustom3DItem = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCustom3DVolume object in C++ memory
    ///
    pub fn new() QCustom3DVolume {
        return .{ .ptr = qtc.QCustom3DVolume_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCustom3DVolume object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _position: QVector3D `
    ///
    /// ` _scaling: QVector3D `
    ///
    /// ` _rotation: QQuaternion `
    ///
    /// ` _textureWidth: i32 `
    ///
    /// ` _textureHeight: i32 `
    ///
    /// ` _textureDepth: i32 `
    ///
    /// ` _textureData: []u8 `
    ///
    /// ` _textureFormat: qimage_enums.Format `
    ///
    /// ` _colorTable: []u32 `
    ///
    pub fn new2(_position: anytype, _scaling: anytype, _rotation: anytype, _textureWidth: i32, _textureHeight: i32, _textureDepth: i32, _textureData: []u8, _textureFormat: i32, _colorTable: []u32) QCustom3DVolume {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        const textureData_list = qtc.libqt_list{
            .len = _textureData.len,
            .data = _textureData.ptr,
        };
        const colorTable_list = qtc.libqt_list{
            .len = _colorTable.len,
            .data = _colorTable.ptr,
        };
        return .{ .ptr = qtc.QCustom3DVolume_new2(@ptrCast(_position.ptr), @ptrCast(_scaling.ptr), @ptrCast(_rotation.ptr), @bitCast(_textureWidth), @bitCast(_textureHeight), @bitCast(_textureDepth), textureData_list, @bitCast(_textureFormat), colorTable_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCustom3DVolume object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QCustom3DVolume {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCustom3DVolume_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCustom3DVolume object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _position: QVector3D `
    ///
    /// ` _scaling: QVector3D `
    ///
    /// ` _rotation: QQuaternion `
    ///
    /// ` _textureWidth: i32 `
    ///
    /// ` _textureHeight: i32 `
    ///
    /// ` _textureDepth: i32 `
    ///
    /// ` _textureData: []u8 `
    ///
    /// ` _textureFormat: qimage_enums.Format `
    ///
    /// ` _colorTable: []u32 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_position: anytype, _scaling: anytype, _rotation: anytype, _textureWidth: i32, _textureHeight: i32, _textureDepth: i32, _textureData: []u8, _textureFormat: i32, _colorTable: []u32, _parent: anytype) QCustom3DVolume {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        const textureData_list = qtc.libqt_list{
            .len = _textureData.len,
            .data = _textureData.ptr,
        };
        const colorTable_list = qtc.libqt_list{
            .len = _colorTable.len,
            .data = _colorTable.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCustom3DVolume_new4(@ptrCast(_position.ptr), @ptrCast(_scaling.ptr), @ptrCast(_rotation.ptr), @bitCast(_textureWidth), @bitCast(_textureHeight), @bitCast(_textureDepth), textureData_list, @bitCast(_textureFormat), colorTable_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn metaObject(self: QCustom3DVolume) QMetaObject {
        return .{ .ptr = qtc.QCustom3DVolume_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume) callconv(.c) QMetaObject) void {
        qtc.QCustom3DVolume_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn superMetaObject(self: QCustom3DVolume) QMetaObject {
        return .{ .ptr = qtc.QCustom3DVolume_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCustom3DVolume, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCustom3DVolume_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCustom3DVolume_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCustom3DVolume, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCustom3DVolume_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QCustom3DVolume, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCustom3DVolume_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCustom3DVolume_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QCustom3DVolume, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCustom3DVolume_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QCustom3DVolume_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DVolume.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextureWidth` instead
    ///
    pub const SetTextureWidth = setTextureWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn setTextureWidth(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SetTextureWidth(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `textureWidth` instead
    ///
    pub const TextureWidth = textureWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn textureWidth(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_TextureWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureHeight` instead
    ///
    pub const SetTextureHeight = setTextureHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn setTextureHeight(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SetTextureHeight(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `textureHeight` instead
    ///
    pub const TextureHeight = textureHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn textureHeight(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_TextureHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureDepth` instead
    ///
    pub const SetTextureDepth = setTextureDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn setTextureDepth(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SetTextureDepth(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `textureDepth` instead
    ///
    pub const TextureDepth = textureDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn textureDepth(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_TextureDepth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureDimensions` instead
    ///
    pub const SetTextureDimensions = setTextureDimensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureDimensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    pub fn setTextureDimensions(self: QCustom3DVolume, width: i32, height: i32, depth: i32) void {
        qtc.QCustom3DVolume_SetTextureDimensions(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `textureDataWidth` instead
    ///
    pub const TextureDataWidth = textureDataWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDataWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn textureDataWidth(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_TextureDataWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliceIndexX` instead
    ///
    pub const SetSliceIndexX = setSliceIndexX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndexX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn setSliceIndexX(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SetSliceIndexX(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `sliceIndexX` instead
    ///
    pub const SliceIndexX = sliceIndexX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceIndexX(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_SliceIndexX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliceIndexY` instead
    ///
    pub const SetSliceIndexY = setSliceIndexY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndexY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn setSliceIndexY(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SetSliceIndexY(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `sliceIndexY` instead
    ///
    pub const SliceIndexY = sliceIndexY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceIndexY(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_SliceIndexY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliceIndexZ` instead
    ///
    pub const SetSliceIndexZ = setSliceIndexZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndexZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn setSliceIndexZ(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SetSliceIndexZ(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `sliceIndexZ` instead
    ///
    pub const SliceIndexZ = sliceIndexZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceIndexZ(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_SliceIndexZ(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliceIndices` instead
    ///
    pub const SetSliceIndices = setSliceIndices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn setSliceIndices(self: QCustom3DVolume, x: i32, y: i32, z: i32) void {
        qtc.QCustom3DVolume_SetSliceIndices(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `setColorTable` instead
    ///
    pub const SetColorTable = setColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` colors: []u32 `
    ///
    pub fn setColorTable(self: QCustom3DVolume, colors: []u32) void {
        const colors_list = qtc.libqt_list{
            .len = colors.len,
            .data = colors.ptr,
        };
        qtc.QCustom3DVolume_SetColorTable(@ptrCast(self.ptr), colors_list);
    }

    /// ### DEPRECATED: Use `colorTable` instead
    ///
    pub const ColorTable = colorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#colorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn colorTable(self: QCustom3DVolume, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QCustom3DVolume_ColorTable(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("QCustom3DVolume.colorTable: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextureData` instead
    ///
    pub const SetTextureData = setTextureData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` data: []u8 `
    ///
    pub fn setTextureData(self: QCustom3DVolume, data: []u8) void {
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QCustom3DVolume_SetTextureData(@ptrCast(self.ptr), data_list);
    }

    /// ### DEPRECATED: Use `createTextureData` instead
    ///
    pub const CreateTextureData = createTextureData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#createTextureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` images: []QImage `
    ///
    pub fn createTextureData(self: QCustom3DVolume, allocator: std.mem.Allocator, images: []QImage) []u8 {
        const images_list = qtc.libqt_list{
            .len = images.len,
            .data = @ptrCast(images.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QCustom3DVolume_CreateTextureData(@ptrCast(self.ptr), images_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u8, _arr.len) catch @panic("QCustom3DVolume.createTextureData: Memory allocation failed");
        const _data_val: [*]u8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textureData` instead
    ///
    pub const TextureData = textureData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textureData(self: QCustom3DVolume, allocator: std.mem.Allocator) []u8 {
        const _arr: qtc.libqt_list = qtc.QCustom3DVolume_TextureData(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u8, _arr.len) catch @panic("QCustom3DVolume.textureData: Memory allocation failed");
        const _data_val: [*]u8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSubTextureData` instead
    ///
    pub const SetSubTextureData = setSubTextureData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSubTextureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` index: i32 `
    ///
    /// ` data: *const u8 `
    ///
    pub fn setSubTextureData(self: QCustom3DVolume, axis: i32, index: i32, data: *const u8) void {
        qtc.QCustom3DVolume_SetSubTextureData(@ptrCast(self.ptr), @bitCast(axis), @bitCast(index), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setSubTextureData2` instead
    ///
    pub const SetSubTextureData2 = setSubTextureData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSubTextureData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` index: i32 `
    ///
    /// ` image: QImage `
    ///
    pub fn setSubTextureData2(self: QCustom3DVolume, axis: i32, index: i32, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QCustom3DVolume_SetSubTextureData2(@ptrCast(self.ptr), @bitCast(axis), @bitCast(index), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `setTextureFormat` instead
    ///
    pub const SetTextureFormat = setTextureFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn setTextureFormat(self: QCustom3DVolume, format: i32) void {
        qtc.QCustom3DVolume_SetTextureFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `textureFormat` instead
    ///
    pub const TextureFormat = textureFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn textureFormat(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_TextureFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlphaMultiplier` instead
    ///
    pub const SetAlphaMultiplier = setAlphaMultiplier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setAlphaMultiplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` mult: f32 `
    ///
    pub fn setAlphaMultiplier(self: QCustom3DVolume, mult: f32) void {
        qtc.QCustom3DVolume_SetAlphaMultiplier(@ptrCast(self.ptr), @bitCast(mult));
    }

    /// ### DEPRECATED: Use `alphaMultiplier` instead
    ///
    pub const AlphaMultiplier = alphaMultiplier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#alphaMultiplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn alphaMultiplier(self: QCustom3DVolume) f32 {
        return qtc.QCustom3DVolume_AlphaMultiplier(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreserveOpacity` instead
    ///
    pub const SetPreserveOpacity = setPreserveOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setPreserveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enable: bool `
    ///
    pub fn setPreserveOpacity(self: QCustom3DVolume, enable: bool) void {
        qtc.QCustom3DVolume_SetPreserveOpacity(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `preserveOpacity` instead
    ///
    pub const PreserveOpacity = preserveOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#preserveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn preserveOpacity(self: QCustom3DVolume) bool {
        return qtc.QCustom3DVolume_PreserveOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUseHighDefShader` instead
    ///
    pub const SetUseHighDefShader = setUseHighDefShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setUseHighDefShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseHighDefShader(self: QCustom3DVolume, enable: bool) void {
        qtc.QCustom3DVolume_SetUseHighDefShader(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `useHighDefShader` instead
    ///
    pub const UseHighDefShader = useHighDefShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#useHighDefShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn useHighDefShader(self: QCustom3DVolume) bool {
        return qtc.QCustom3DVolume_UseHighDefShader(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDrawSlices` instead
    ///
    pub const SetDrawSlices = setDrawSlices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setDrawSlices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enable: bool `
    ///
    pub fn setDrawSlices(self: QCustom3DVolume, enable: bool) void {
        qtc.QCustom3DVolume_SetDrawSlices(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `drawSlices` instead
    ///
    pub const DrawSlices = drawSlices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSlices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn drawSlices(self: QCustom3DVolume) bool {
        return qtc.QCustom3DVolume_DrawSlices(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDrawSliceFrames` instead
    ///
    pub const SetDrawSliceFrames = setDrawSliceFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setDrawSliceFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enable: bool `
    ///
    pub fn setDrawSliceFrames(self: QCustom3DVolume, enable: bool) void {
        qtc.QCustom3DVolume_SetDrawSliceFrames(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `drawSliceFrames` instead
    ///
    pub const DrawSliceFrames = drawSliceFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSliceFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn drawSliceFrames(self: QCustom3DVolume) bool {
        return qtc.QCustom3DVolume_DrawSliceFrames(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSliceFrameColor` instead
    ///
    pub const SetSliceFrameColor = setSliceFrameColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` color: QColor `
    ///
    pub fn setSliceFrameColor(self: QCustom3DVolume, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QCustom3DVolume_SetSliceFrameColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `sliceFrameColor` instead
    ///
    pub const SliceFrameColor = sliceFrameColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceFrameColor(self: QCustom3DVolume) QColor {
        return .{ .ptr = qtc.QCustom3DVolume_SliceFrameColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSliceFrameWidths` instead
    ///
    pub const SetSliceFrameWidths = setSliceFrameWidths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameWidths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` values: QVector3D `
    ///
    pub fn setSliceFrameWidths(self: QCustom3DVolume, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QCustom3DVolume_SetSliceFrameWidths(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `sliceFrameWidths` instead
    ///
    pub const SliceFrameWidths = sliceFrameWidths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameWidths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceFrameWidths(self: QCustom3DVolume) QVector3D {
        return .{ .ptr = qtc.QCustom3DVolume_SliceFrameWidths(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSliceFrameGaps` instead
    ///
    pub const SetSliceFrameGaps = setSliceFrameGaps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameGaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` values: QVector3D `
    ///
    pub fn setSliceFrameGaps(self: QCustom3DVolume, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QCustom3DVolume_SetSliceFrameGaps(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `sliceFrameGaps` instead
    ///
    pub const SliceFrameGaps = sliceFrameGaps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameGaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceFrameGaps(self: QCustom3DVolume) QVector3D {
        return .{ .ptr = qtc.QCustom3DVolume_SliceFrameGaps(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSliceFrameThicknesses` instead
    ///
    pub const SetSliceFrameThicknesses = setSliceFrameThicknesses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameThicknesses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` values: QVector3D `
    ///
    pub fn setSliceFrameThicknesses(self: QCustom3DVolume, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QCustom3DVolume_SetSliceFrameThicknesses(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `sliceFrameThicknesses` instead
    ///
    pub const SliceFrameThicknesses = sliceFrameThicknesses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameThicknesses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn sliceFrameThicknesses(self: QCustom3DVolume) QVector3D {
        return .{ .ptr = qtc.QCustom3DVolume_SliceFrameThicknesses(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `renderSlice` instead
    ///
    pub const RenderSlice = renderSlice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#renderSlice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` axis: qnamespace_enums.Axis `
    ///
    /// ` index: i32 `
    ///
    pub fn renderSlice(self: QCustom3DVolume, axis: i32, index: i32) QImage {
        return .{ .ptr = qtc.QCustom3DVolume_RenderSlice(@ptrCast(self.ptr), @bitCast(axis), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `textureWidthChanged` instead
    ///
    pub const TextureWidthChanged = textureWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn textureWidthChanged(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_TextureWidthChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onTextureWidthChanged` instead
    ///
    pub const OnTextureWidthChanged = onTextureWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, value: i32) callconv(.c) void `
    ///
    pub fn onTextureWidthChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_TextureWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureHeightChanged` instead
    ///
    pub const TextureHeightChanged = textureHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn textureHeightChanged(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_TextureHeightChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onTextureHeightChanged` instead
    ///
    pub const OnTextureHeightChanged = onTextureHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, value: i32) callconv(.c) void `
    ///
    pub fn onTextureHeightChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_TextureHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureDepthChanged` instead
    ///
    pub const TextureDepthChanged = textureDepthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDepthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn textureDepthChanged(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_TextureDepthChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onTextureDepthChanged` instead
    ///
    pub const OnTextureDepthChanged = onTextureDepthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDepthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, value: i32) callconv(.c) void `
    ///
    pub fn onTextureDepthChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_TextureDepthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceIndexXChanged` instead
    ///
    pub const SliceIndexXChanged = sliceIndexXChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexXChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn sliceIndexXChanged(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SliceIndexXChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onSliceIndexXChanged` instead
    ///
    pub const OnSliceIndexXChanged = onSliceIndexXChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexXChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, value: i32) callconv(.c) void `
    ///
    pub fn onSliceIndexXChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceIndexXChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceIndexYChanged` instead
    ///
    pub const SliceIndexYChanged = sliceIndexYChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexYChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn sliceIndexYChanged(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SliceIndexYChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onSliceIndexYChanged` instead
    ///
    pub const OnSliceIndexYChanged = onSliceIndexYChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexYChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, value: i32) callconv(.c) void `
    ///
    pub fn onSliceIndexYChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceIndexYChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceIndexZChanged` instead
    ///
    pub const SliceIndexZChanged = sliceIndexZChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexZChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` value: i32 `
    ///
    pub fn sliceIndexZChanged(self: QCustom3DVolume, value: i32) void {
        qtc.QCustom3DVolume_SliceIndexZChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onSliceIndexZChanged` instead
    ///
    pub const OnSliceIndexZChanged = onSliceIndexZChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexZChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, value: i32) callconv(.c) void `
    ///
    pub fn onSliceIndexZChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceIndexZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorTableChanged` instead
    ///
    pub const ColorTableChanged = colorTableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#colorTableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn colorTableChanged(self: QCustom3DVolume) void {
        qtc.QCustom3DVolume_ColorTableChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorTableChanged` instead
    ///
    pub const OnColorTableChanged = onColorTableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#colorTableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume) callconv(.c) void `
    ///
    pub fn onColorTableChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_ColorTableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureDataChanged` instead
    ///
    pub const TextureDataChanged = textureDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` data: []u8 `
    ///
    pub fn textureDataChanged(self: QCustom3DVolume, data: []u8) void {
        const data_list = qtc.libqt_list{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QCustom3DVolume_TextureDataChanged(@ptrCast(self.ptr), data_list);
    }

    /// ### DEPRECATED: Use `onTextureDataChanged` instead
    ///
    pub const OnTextureDataChanged = onTextureDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, data: qtc.libqt_list ([]u8)) callconv(.c) void `
    ///
    pub fn onTextureDataChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, qtc.libqt_list) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_TextureDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureFormatChanged` instead
    ///
    pub const TextureFormatChanged = textureFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn textureFormatChanged(self: QCustom3DVolume, format: i32) void {
        qtc.QCustom3DVolume_TextureFormatChanged(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `onTextureFormatChanged` instead
    ///
    pub const OnTextureFormatChanged = onTextureFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, format: qimage_enums.Format) callconv(.c) void `
    ///
    pub fn onTextureFormatChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, i32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_TextureFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alphaMultiplierChanged` instead
    ///
    pub const AlphaMultiplierChanged = alphaMultiplierChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#alphaMultiplierChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` mult: f32 `
    ///
    pub fn alphaMultiplierChanged(self: QCustom3DVolume, mult: f32) void {
        qtc.QCustom3DVolume_AlphaMultiplierChanged(@ptrCast(self.ptr), @bitCast(mult));
    }

    /// ### DEPRECATED: Use `onAlphaMultiplierChanged` instead
    ///
    pub const OnAlphaMultiplierChanged = onAlphaMultiplierChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#alphaMultiplierChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, mult: f32) callconv(.c) void `
    ///
    pub fn onAlphaMultiplierChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, f32) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_AlphaMultiplierChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preserveOpacityChanged` instead
    ///
    pub const PreserveOpacityChanged = preserveOpacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#preserveOpacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enabled: bool `
    ///
    pub fn preserveOpacityChanged(self: QCustom3DVolume, enabled: bool) void {
        qtc.QCustom3DVolume_PreserveOpacityChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onPreserveOpacityChanged` instead
    ///
    pub const OnPreserveOpacityChanged = onPreserveOpacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#preserveOpacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, enabled: bool) callconv(.c) void `
    ///
    pub fn onPreserveOpacityChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_PreserveOpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useHighDefShaderChanged` instead
    ///
    pub const UseHighDefShaderChanged = useHighDefShaderChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#useHighDefShaderChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enabled: bool `
    ///
    pub fn useHighDefShaderChanged(self: QCustom3DVolume, enabled: bool) void {
        qtc.QCustom3DVolume_UseHighDefShaderChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onUseHighDefShaderChanged` instead
    ///
    pub const OnUseHighDefShaderChanged = onUseHighDefShaderChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#useHighDefShaderChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, enabled: bool) callconv(.c) void `
    ///
    pub fn onUseHighDefShaderChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_UseHighDefShaderChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawSlicesChanged` instead
    ///
    pub const DrawSlicesChanged = drawSlicesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSlicesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enabled: bool `
    ///
    pub fn drawSlicesChanged(self: QCustom3DVolume, enabled: bool) void {
        qtc.QCustom3DVolume_DrawSlicesChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onDrawSlicesChanged` instead
    ///
    pub const OnDrawSlicesChanged = onDrawSlicesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSlicesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, enabled: bool) callconv(.c) void `
    ///
    pub fn onDrawSlicesChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_DrawSlicesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawSliceFramesChanged` instead
    ///
    pub const DrawSliceFramesChanged = drawSliceFramesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSliceFramesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enabled: bool `
    ///
    pub fn drawSliceFramesChanged(self: QCustom3DVolume, enabled: bool) void {
        qtc.QCustom3DVolume_DrawSliceFramesChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onDrawSliceFramesChanged` instead
    ///
    pub const OnDrawSliceFramesChanged = onDrawSliceFramesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSliceFramesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, enabled: bool) callconv(.c) void `
    ///
    pub fn onDrawSliceFramesChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_DrawSliceFramesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceFrameColorChanged` instead
    ///
    pub const SliceFrameColorChanged = sliceFrameColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` color: QColor `
    ///
    pub fn sliceFrameColorChanged(self: QCustom3DVolume, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QCustom3DVolume_SliceFrameColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSliceFrameColorChanged` instead
    ///
    pub const OnSliceFrameColorChanged = onSliceFrameColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, color: QColor) callconv(.c) void `
    ///
    pub fn onSliceFrameColorChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QColor) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceFrameColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceFrameWidthsChanged` instead
    ///
    pub const SliceFrameWidthsChanged = sliceFrameWidthsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameWidthsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` values: QVector3D `
    ///
    pub fn sliceFrameWidthsChanged(self: QCustom3DVolume, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QCustom3DVolume_SliceFrameWidthsChanged(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `onSliceFrameWidthsChanged` instead
    ///
    pub const OnSliceFrameWidthsChanged = onSliceFrameWidthsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameWidthsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, values: QVector3D) callconv(.c) void `
    ///
    pub fn onSliceFrameWidthsChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceFrameWidthsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceFrameGapsChanged` instead
    ///
    pub const SliceFrameGapsChanged = sliceFrameGapsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameGapsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` values: QVector3D `
    ///
    pub fn sliceFrameGapsChanged(self: QCustom3DVolume, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QCustom3DVolume_SliceFrameGapsChanged(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `onSliceFrameGapsChanged` instead
    ///
    pub const OnSliceFrameGapsChanged = onSliceFrameGapsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameGapsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, values: QVector3D) callconv(.c) void `
    ///
    pub fn onSliceFrameGapsChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceFrameGapsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sliceFrameThicknessesChanged` instead
    ///
    pub const SliceFrameThicknessesChanged = sliceFrameThicknessesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameThicknessesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` values: QVector3D `
    ///
    pub fn sliceFrameThicknessesChanged(self: QCustom3DVolume, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QCustom3DVolume_SliceFrameThicknessesChanged(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `onSliceFrameThicknessesChanged` instead
    ///
    pub const OnSliceFrameThicknessesChanged = onSliceFrameThicknessesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameThicknessesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, values: QVector3D) callconv(.c) void `
    ///
    pub fn onSliceFrameThicknessesChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DVolume_Connect_SliceFrameThicknessesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QCustom3DVolume_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DVolume.tr2: Memory allocation failed");
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
        var _str = qtc.QCustom3DVolume_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DVolume.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMeshFile` instead
    ///
    pub const SetMeshFile = setMeshFile;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setMeshFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _meshFile: []const u8 `
    ///
    pub fn setMeshFile(self: QCustom3DVolume, _meshFile: []const u8) void {
        const meshFile_str = qtc.libqt_string{
            .len = _meshFile.len,
            .data = _meshFile.ptr,
        };
        qtc.QCustom3DItem_SetMeshFile(@ptrCast(self.ptr), meshFile_str);
    }

    /// ### DEPRECATED: Use `meshFile` instead
    ///
    pub const MeshFile = meshFile;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn meshFile(self: QCustom3DVolume, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCustom3DItem_MeshFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DVolume.meshFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextureFile` instead
    ///
    pub const SetTextureFile = setTextureFile;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setTextureFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _textureFile: []const u8 `
    ///
    pub fn setTextureFile(self: QCustom3DVolume, _textureFile: []const u8) void {
        const textureFile_str = qtc.libqt_string{
            .len = _textureFile.len,
            .data = _textureFile.ptr,
        };
        qtc.QCustom3DItem_SetTextureFile(@ptrCast(self.ptr), textureFile_str);
    }

    /// ### DEPRECATED: Use `textureFile` instead
    ///
    pub const TextureFile = textureFile;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textureFile(self: QCustom3DVolume, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCustom3DItem_TextureFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DVolume.textureFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn setPosition(self: QCustom3DVolume, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.QCustom3DItem_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn position(self: QCustom3DVolume) QVector3D {
        return .{ .ptr = qtc.QCustom3DItem_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPositionAbsolute` instead
    ///
    pub const SetPositionAbsolute = setPositionAbsolute;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setPositionAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` positionAbsolute: bool `
    ///
    pub fn setPositionAbsolute(self: QCustom3DVolume, positionAbsolute: bool) void {
        qtc.QCustom3DItem_SetPositionAbsolute(@ptrCast(self.ptr), positionAbsolute);
    }

    /// ### DEPRECATED: Use `isPositionAbsolute` instead
    ///
    pub const IsPositionAbsolute = isPositionAbsolute;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isPositionAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn isPositionAbsolute(self: QCustom3DVolume) bool {
        return qtc.QCustom3DItem_IsPositionAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScaling` instead
    ///
    pub const SetScaling = setScaling;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setScaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _scaling: QVector3D `
    ///
    pub fn setScaling(self: QCustom3DVolume, _scaling: anytype) void {
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        qtc.QCustom3DItem_SetScaling(@ptrCast(self.ptr), @ptrCast(_scaling.ptr));
    }

    /// ### DEPRECATED: Use `scaling` instead
    ///
    pub const Scaling = scaling;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn scaling(self: QCustom3DVolume) QVector3D {
        return .{ .ptr = qtc.QCustom3DItem_Scaling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScalingAbsolute` instead
    ///
    pub const SetScalingAbsolute = setScalingAbsolute;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setScalingAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` scalingAbsolute: bool `
    ///
    pub fn setScalingAbsolute(self: QCustom3DVolume, scalingAbsolute: bool) void {
        qtc.QCustom3DItem_SetScalingAbsolute(@ptrCast(self.ptr), scalingAbsolute);
    }

    /// ### DEPRECATED: Use `isScalingAbsolute` instead
    ///
    pub const IsScalingAbsolute = isScalingAbsolute;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isScalingAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn isScalingAbsolute(self: QCustom3DVolume) bool {
        return qtc.QCustom3DItem_IsScalingAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _rotation: QQuaternion `
    ///
    pub fn setRotation(self: QCustom3DVolume, _rotation: anytype) void {
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        qtc.QCustom3DItem_SetRotation(@ptrCast(self.ptr), @ptrCast(_rotation.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn rotation(self: QCustom3DVolume) QQuaternion {
        return .{ .ptr = qtc.QCustom3DItem_Rotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QCustom3DVolume, visible: bool) void {
        qtc.QCustom3DItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn isVisible(self: QCustom3DVolume) bool {
        return qtc.QCustom3DItem_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadowCasting` instead
    ///
    pub const SetShadowCasting = setShadowCasting;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setShadowCasting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` enabled: bool `
    ///
    pub fn setShadowCasting(self: QCustom3DVolume, enabled: bool) void {
        qtc.QCustom3DItem_SetShadowCasting(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isShadowCasting` instead
    ///
    pub const IsShadowCasting = isShadowCasting;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isShadowCasting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn isShadowCasting(self: QCustom3DVolume) bool {
        return qtc.QCustom3DItem_IsShadowCasting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotationAxisAndAngle` instead
    ///
    pub const SetRotationAxisAndAngle = setRotationAxisAndAngle;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setRotationAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn setRotationAxisAndAngle(self: QCustom3DVolume, axis: anytype, angle: f32) void {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        qtc.QCustom3DItem_SetRotationAxisAndAngle(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `setTextureImage` instead
    ///
    pub const SetTextureImage = setTextureImage;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setTextureImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` textureImage: QImage `
    ///
    pub fn setTextureImage(self: QCustom3DVolume, textureImage: anytype) void {
        comptime _ = @TypeOf(textureImage)._is_QImage;
        qtc.QCustom3DItem_SetTextureImage(@ptrCast(self.ptr), @ptrCast(textureImage.ptr));
    }

    /// ### DEPRECATED: Use `meshFileChanged` instead
    ///
    pub const MeshFileChanged = meshFileChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFileChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _meshFile: []const u8 `
    ///
    pub fn meshFileChanged(self: QCustom3DVolume, _meshFile: []const u8) void {
        const meshFile_str = qtc.libqt_string{
            .len = _meshFile.len,
            .data = _meshFile.ptr,
        };
        qtc.QCustom3DItem_MeshFileChanged(@ptrCast(self.ptr), meshFile_str);
    }

    /// ### DEPRECATED: Use `onMeshFileChanged` instead
    ///
    pub const OnMeshFileChanged = onMeshFileChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFileChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, meshFile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMeshFileChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, [*:0]const u8) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_MeshFileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureFileChanged` instead
    ///
    pub const TextureFileChanged = textureFileChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFileChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _textureFile: []const u8 `
    ///
    pub fn textureFileChanged(self: QCustom3DVolume, _textureFile: []const u8) void {
        const textureFile_str = qtc.libqt_string{
            .len = _textureFile.len,
            .data = _textureFile.ptr,
        };
        qtc.QCustom3DItem_TextureFileChanged(@ptrCast(self.ptr), textureFile_str);
    }

    /// ### DEPRECATED: Use `onTextureFileChanged` instead
    ///
    pub const OnTextureFileChanged = onTextureFileChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFileChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, textureFile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextureFileChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, [*:0]const u8) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_TextureFileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn positionChanged(self: QCustom3DVolume, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.QCustom3DItem_PositionChanged(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, position: QVector3D) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionAbsoluteChanged` instead
    ///
    pub const PositionAbsoluteChanged = positionAbsoluteChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionAbsoluteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` positionAbsolute: bool `
    ///
    pub fn positionAbsoluteChanged(self: QCustom3DVolume, positionAbsolute: bool) void {
        qtc.QCustom3DItem_PositionAbsoluteChanged(@ptrCast(self.ptr), positionAbsolute);
    }

    /// ### DEPRECATED: Use `onPositionAbsoluteChanged` instead
    ///
    pub const OnPositionAbsoluteChanged = onPositionAbsoluteChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionAbsoluteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, positionAbsolute: bool) callconv(.c) void `
    ///
    pub fn onPositionAbsoluteChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_PositionAbsoluteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scalingChanged` instead
    ///
    pub const ScalingChanged = scalingChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _scaling: QVector3D `
    ///
    pub fn scalingChanged(self: QCustom3DVolume, _scaling: anytype) void {
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        qtc.QCustom3DItem_ScalingChanged(@ptrCast(self.ptr), @ptrCast(_scaling.ptr));
    }

    /// ### DEPRECATED: Use `onScalingChanged` instead
    ///
    pub const OnScalingChanged = onScalingChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, scaling: QVector3D) callconv(.c) void `
    ///
    pub fn onScalingChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_ScalingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` _rotation: QQuaternion `
    ///
    pub fn rotationChanged(self: QCustom3DVolume, _rotation: anytype) void {
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        qtc.QCustom3DItem_RotationChanged(@ptrCast(self.ptr), @ptrCast(_rotation.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, rotation: QQuaternion) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QQuaternion) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QCustom3DVolume, visible: bool) void {
        qtc.QCustom3DItem_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadowCastingChanged` instead
    ///
    pub const ShadowCastingChanged = shadowCastingChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#shadowCastingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` shadowCasting: bool `
    ///
    pub fn shadowCastingChanged(self: QCustom3DVolume, shadowCasting: bool) void {
        qtc.QCustom3DItem_ShadowCastingChanged(@ptrCast(self.ptr), shadowCasting);
    }

    /// ### DEPRECATED: Use `onShadowCastingChanged` instead
    ///
    pub const OnShadowCastingChanged = onShadowCastingChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#shadowCastingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, shadowCasting: bool) callconv(.c) void `
    ///
    pub fn onShadowCastingChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_ShadowCastingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scalingAbsoluteChanged` instead
    ///
    pub const ScalingAbsoluteChanged = scalingAbsoluteChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingAbsoluteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` scalingAbsolute: bool `
    ///
    pub fn scalingAbsoluteChanged(self: QCustom3DVolume, scalingAbsolute: bool) void {
        qtc.QCustom3DItem_ScalingAbsoluteChanged(@ptrCast(self.ptr), scalingAbsolute);
    }

    /// ### DEPRECATED: Use `onScalingAbsoluteChanged` instead
    ///
    pub const OnScalingAbsoluteChanged = onScalingAbsoluteChanged;

    /// Inherited from QCustom3DItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingAbsoluteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, scalingAbsolute: bool) callconv(.c) void `
    ///
    pub fn onScalingAbsoluteChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_ScalingAbsoluteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCustom3DVolume, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DVolume.objectName: Memory allocation failed");
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCustom3DVolume, name: []const u8) void {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn isWidgetType(self: QCustom3DVolume) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn isWindowType(self: QCustom3DVolume) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn isQuickItemType(self: QCustom3DVolume) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn signalsBlocked(self: QCustom3DVolume) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCustom3DVolume, b: bool) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn thread(self: QCustom3DVolume) QThread {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCustom3DVolume, _thread: anytype) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCustom3DVolume, interval: i32) i32 {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCustom3DVolume, time: i64) i32 {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCustom3DVolume, id: i32) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCustom3DVolume, id: i32) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCustom3DVolume, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCustom3DVolume.children: Memory allocation failed");
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCustom3DVolume, _parent: anytype) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCustom3DVolume, filterObj: anytype) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCustom3DVolume, obj: anytype) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCustom3DVolume, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn disconnect3(self: QCustom3DVolume) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCustom3DVolume, receiver: anytype) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn dumpObjectTree(self: QCustom3DVolume) void {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn dumpObjectInfo(self: QCustom3DVolume) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCustom3DVolume, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCustom3DVolume, name: [:0]const u8) QVariant {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCustom3DVolume, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCustom3DVolume.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCustom3DVolume.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn bindingStorage(self: QCustom3DVolume) QBindingStorage {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn bindingStorage2(self: QCustom3DVolume) QBindingStorage {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn destroyed(self: QCustom3DVolume) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume) callconv(.c) void) void {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn parent(self: QCustom3DVolume) QObject {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCustom3DVolume, classname: [:0]const u8) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn deleteLater(self: QCustom3DVolume) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCustom3DVolume, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCustom3DVolume, time: i64, timerType: i32) i32 {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCustom3DVolume, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCustom3DVolume, signal: [:0]const u8) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCustom3DVolume, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCustom3DVolume, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCustom3DVolume, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCustom3DVolume, param1: anytype) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QObject) callconv(.c) void) void {
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCustom3DVolume, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DVolume_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCustom3DVolume, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DVolume_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QEvent) callconv(.c) bool) void {
        qtc.QCustom3DVolume_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCustom3DVolume, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DVolume_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCustom3DVolume, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DVolume_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCustom3DVolume_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCustom3DVolume, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCustom3DVolume_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCustom3DVolume, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCustom3DVolume_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QTimerEvent) callconv(.c) void) void {
        qtc.QCustom3DVolume_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCustom3DVolume, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCustom3DVolume_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCustom3DVolume, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCustom3DVolume_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QChildEvent) callconv(.c) void) void {
        qtc.QCustom3DVolume_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCustom3DVolume, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCustom3DVolume_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCustom3DVolume, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCustom3DVolume_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QEvent) callconv(.c) void) void {
        qtc.QCustom3DVolume_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCustom3DVolume, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DVolume_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCustom3DVolume, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DVolume_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QMetaMethod) callconv(.c) void) void {
        qtc.QCustom3DVolume_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCustom3DVolume, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DVolume_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCustom3DVolume, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DVolume_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DVolume`
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, QMetaMethod) callconv(.c) void) void {
        qtc.QCustom3DVolume_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn sender(self: QCustom3DVolume) QObject {
        return .{ .ptr = qtc.QCustom3DVolume_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCustom3DVolume `
    ///
    pub fn senderSignalIndex(self: QCustom3DVolume) i32 {
        return qtc.QCustom3DVolume_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCustom3DVolume, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCustom3DVolume_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCustom3DVolume, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCustom3DVolume_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DVolume `
    ///
    /// ` callback: *const fn (self: QCustom3DVolume, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCustom3DVolume, callback: *const fn (QCustom3DVolume, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#dtor.QCustom3DVolume)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCustom3DVolume `
    ///
    pub fn delete(self: QCustom3DVolume) void {
        qtc.QCustom3DVolume_Delete(@ptrCast(self.ptr));
    }
};
