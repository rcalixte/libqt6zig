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
const QQuaternion = @import("libqt6").QQuaternion;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html)
pub const QCustom3DItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCustom3DItem,

    pub const _is_QCustom3DItem = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCustom3DItem object in C++ memory
    ///
    pub fn new() QCustom3DItem {
        return .{ .ptr = qtc.QCustom3DItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCustom3DItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _meshFile: []const u8 `
    ///
    /// ` _position: QVector3D `
    ///
    /// ` _scaling: QVector3D `
    ///
    /// ` _rotation: QQuaternion `
    ///
    /// ` texture: QImage `
    ///
    pub fn new2(_meshFile: []const u8, _position: anytype, _scaling: anytype, _rotation: anytype, texture: anytype) QCustom3DItem {
        const meshFile_str = qtc.libqt_string{
            .len = _meshFile.len,
            .data = _meshFile.ptr,
        };
        comptime _ = @TypeOf(_position)._is_QVector3D;
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        comptime _ = @TypeOf(texture)._is_QImage;
        return .{ .ptr = qtc.QCustom3DItem_new2(meshFile_str, @ptrCast(_position.ptr), @ptrCast(_scaling.ptr), @ptrCast(_rotation.ptr), @ptrCast(texture.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCustom3DItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QCustom3DItem {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCustom3DItem_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCustom3DItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _meshFile: []const u8 `
    ///
    /// ` _position: QVector3D `
    ///
    /// ` _scaling: QVector3D `
    ///
    /// ` _rotation: QQuaternion `
    ///
    /// ` texture: QImage `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_meshFile: []const u8, _position: anytype, _scaling: anytype, _rotation: anytype, texture: anytype, _parent: anytype) QCustom3DItem {
        const meshFile_str = qtc.libqt_string{
            .len = _meshFile.len,
            .data = _meshFile.ptr,
        };
        comptime _ = @TypeOf(_position)._is_QVector3D;
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        comptime _ = @TypeOf(texture)._is_QImage;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCustom3DItem_new4(meshFile_str, @ptrCast(_position.ptr), @ptrCast(_scaling.ptr), @ptrCast(_rotation.ptr), @ptrCast(texture.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn metaObject(self: QCustom3DItem) QMetaObject {
        return .{ .ptr = qtc.QCustom3DItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCustom3DItem, callback: *const fn (QCustom3DItem) callconv(.c) QMetaObject) void {
        qtc.QCustom3DItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    pub fn superMetaObject(self: QCustom3DItem) QMetaObject {
        return .{ .ptr = qtc.QCustom3DItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCustom3DItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCustom3DItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCustom3DItem, callback: *const fn (QCustom3DItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCustom3DItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCustom3DItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCustom3DItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QCustom3DItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCustom3DItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCustom3DItem, callback: *const fn (QCustom3DItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCustom3DItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QCustom3DItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCustom3DItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QCustom3DItem_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMeshFile` instead
    ///
    pub const SetMeshFile = setMeshFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setMeshFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _meshFile: []const u8 `
    ///
    pub fn setMeshFile(self: QCustom3DItem, _meshFile: []const u8) void {
        const meshFile_str = qtc.libqt_string{
            .len = _meshFile.len,
            .data = _meshFile.ptr,
        };
        qtc.QCustom3DItem_SetMeshFile(@ptrCast(self.ptr), meshFile_str);
    }

    /// ### DEPRECATED: Use `meshFile` instead
    ///
    pub const MeshFile = meshFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#meshFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn meshFile(self: QCustom3DItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCustom3DItem_MeshFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DItem.meshFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextureFile` instead
    ///
    pub const SetTextureFile = setTextureFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setTextureFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _textureFile: []const u8 `
    ///
    pub fn setTextureFile(self: QCustom3DItem, _textureFile: []const u8) void {
        const textureFile_str = qtc.libqt_string{
            .len = _textureFile.len,
            .data = _textureFile.ptr,
        };
        qtc.QCustom3DItem_SetTextureFile(@ptrCast(self.ptr), textureFile_str);
    }

    /// ### DEPRECATED: Use `textureFile` instead
    ///
    pub const TextureFile = textureFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#textureFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textureFile(self: QCustom3DItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCustom3DItem_TextureFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DItem.textureFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn setPosition(self: QCustom3DItem, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.QCustom3DItem_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn position(self: QCustom3DItem) QVector3D {
        return .{ .ptr = qtc.QCustom3DItem_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPositionAbsolute` instead
    ///
    pub const SetPositionAbsolute = setPositionAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setPositionAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` positionAbsolute: bool `
    ///
    pub fn setPositionAbsolute(self: QCustom3DItem, positionAbsolute: bool) void {
        qtc.QCustom3DItem_SetPositionAbsolute(@ptrCast(self.ptr), positionAbsolute);
    }

    /// ### DEPRECATED: Use `isPositionAbsolute` instead
    ///
    pub const IsPositionAbsolute = isPositionAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isPositionAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn isPositionAbsolute(self: QCustom3DItem) bool {
        return qtc.QCustom3DItem_IsPositionAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScaling` instead
    ///
    pub const SetScaling = setScaling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setScaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _scaling: QVector3D `
    ///
    pub fn setScaling(self: QCustom3DItem, _scaling: anytype) void {
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        qtc.QCustom3DItem_SetScaling(@ptrCast(self.ptr), @ptrCast(_scaling.ptr));
    }

    /// ### DEPRECATED: Use `scaling` instead
    ///
    pub const Scaling = scaling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scaling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn scaling(self: QCustom3DItem) QVector3D {
        return .{ .ptr = qtc.QCustom3DItem_Scaling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScalingAbsolute` instead
    ///
    pub const SetScalingAbsolute = setScalingAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setScalingAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` scalingAbsolute: bool `
    ///
    pub fn setScalingAbsolute(self: QCustom3DItem, scalingAbsolute: bool) void {
        qtc.QCustom3DItem_SetScalingAbsolute(@ptrCast(self.ptr), scalingAbsolute);
    }

    /// ### DEPRECATED: Use `isScalingAbsolute` instead
    ///
    pub const IsScalingAbsolute = isScalingAbsolute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isScalingAbsolute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn isScalingAbsolute(self: QCustom3DItem) bool {
        return qtc.QCustom3DItem_IsScalingAbsolute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _rotation: QQuaternion `
    ///
    pub fn setRotation(self: QCustom3DItem, _rotation: anytype) void {
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        qtc.QCustom3DItem_SetRotation(@ptrCast(self.ptr), @ptrCast(_rotation.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn rotation(self: QCustom3DItem) QQuaternion {
        return .{ .ptr = qtc.QCustom3DItem_Rotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QCustom3DItem, visible: bool) void {
        qtc.QCustom3DItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn isVisible(self: QCustom3DItem) bool {
        return qtc.QCustom3DItem_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadowCasting` instead
    ///
    pub const SetShadowCasting = setShadowCasting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setShadowCasting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setShadowCasting(self: QCustom3DItem, enabled: bool) void {
        qtc.QCustom3DItem_SetShadowCasting(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isShadowCasting` instead
    ///
    pub const IsShadowCasting = isShadowCasting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#isShadowCasting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn isShadowCasting(self: QCustom3DItem) bool {
        return qtc.QCustom3DItem_IsShadowCasting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotationAxisAndAngle` instead
    ///
    pub const SetRotationAxisAndAngle = setRotationAxisAndAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setRotationAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn setRotationAxisAndAngle(self: QCustom3DItem, axis: anytype, angle: f32) void {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        qtc.QCustom3DItem_SetRotationAxisAndAngle(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `setTextureImage` instead
    ///
    pub const SetTextureImage = setTextureImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#setTextureImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` textureImage: QImage `
    ///
    pub fn setTextureImage(self: QCustom3DItem, textureImage: anytype) void {
        comptime _ = @TypeOf(textureImage)._is_QImage;
        qtc.QCustom3DItem_SetTextureImage(@ptrCast(self.ptr), @ptrCast(textureImage.ptr));
    }

    /// ### DEPRECATED: Use `meshFileChanged` instead
    ///
    pub const MeshFileChanged = meshFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#meshFileChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _meshFile: []const u8 `
    ///
    pub fn meshFileChanged(self: QCustom3DItem, _meshFile: []const u8) void {
        const meshFile_str = qtc.libqt_string{
            .len = _meshFile.len,
            .data = _meshFile.ptr,
        };
        qtc.QCustom3DItem_MeshFileChanged(@ptrCast(self.ptr), meshFile_str);
    }

    /// ### DEPRECATED: Use `onMeshFileChanged` instead
    ///
    pub const OnMeshFileChanged = onMeshFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#meshFileChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, meshFile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMeshFileChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_MeshFileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureFileChanged` instead
    ///
    pub const TextureFileChanged = textureFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#textureFileChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _textureFile: []const u8 `
    ///
    pub fn textureFileChanged(self: QCustom3DItem, _textureFile: []const u8) void {
        const textureFile_str = qtc.libqt_string{
            .len = _textureFile.len,
            .data = _textureFile.ptr,
        };
        qtc.QCustom3DItem_TextureFileChanged(@ptrCast(self.ptr), textureFile_str);
    }

    /// ### DEPRECATED: Use `onTextureFileChanged` instead
    ///
    pub const OnTextureFileChanged = onTextureFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#textureFileChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, textureFile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextureFileChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_TextureFileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn positionChanged(self: QCustom3DItem, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.QCustom3DItem_PositionChanged(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, position: QVector3D) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionAbsoluteChanged` instead
    ///
    pub const PositionAbsoluteChanged = positionAbsoluteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionAbsoluteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` positionAbsolute: bool `
    ///
    pub fn positionAbsoluteChanged(self: QCustom3DItem, positionAbsolute: bool) void {
        qtc.QCustom3DItem_PositionAbsoluteChanged(@ptrCast(self.ptr), positionAbsolute);
    }

    /// ### DEPRECATED: Use `onPositionAbsoluteChanged` instead
    ///
    pub const OnPositionAbsoluteChanged = onPositionAbsoluteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#positionAbsoluteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, positionAbsolute: bool) callconv(.c) void `
    ///
    pub fn onPositionAbsoluteChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_PositionAbsoluteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scalingChanged` instead
    ///
    pub const ScalingChanged = scalingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _scaling: QVector3D `
    ///
    pub fn scalingChanged(self: QCustom3DItem, _scaling: anytype) void {
        comptime _ = @TypeOf(_scaling)._is_QVector3D;
        qtc.QCustom3DItem_ScalingChanged(@ptrCast(self.ptr), @ptrCast(_scaling.ptr));
    }

    /// ### DEPRECATED: Use `onScalingChanged` instead
    ///
    pub const OnScalingChanged = onScalingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, scaling: QVector3D) callconv(.c) void `
    ///
    pub fn onScalingChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QVector3D) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_ScalingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` _rotation: QQuaternion `
    ///
    pub fn rotationChanged(self: QCustom3DItem, _rotation: anytype) void {
        comptime _ = @TypeOf(_rotation)._is_QQuaternion;
        qtc.QCustom3DItem_RotationChanged(@ptrCast(self.ptr), @ptrCast(_rotation.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, rotation: QQuaternion) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QQuaternion) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QCustom3DItem, visible: bool) void {
        qtc.QCustom3DItem_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadowCastingChanged` instead
    ///
    pub const ShadowCastingChanged = shadowCastingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#shadowCastingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` shadowCasting: bool `
    ///
    pub fn shadowCastingChanged(self: QCustom3DItem, shadowCasting: bool) void {
        qtc.QCustom3DItem_ShadowCastingChanged(@ptrCast(self.ptr), shadowCasting);
    }

    /// ### DEPRECATED: Use `onShadowCastingChanged` instead
    ///
    pub const OnShadowCastingChanged = onShadowCastingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#shadowCastingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, shadowCasting: bool) callconv(.c) void `
    ///
    pub fn onShadowCastingChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_ShadowCastingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scalingAbsoluteChanged` instead
    ///
    pub const ScalingAbsoluteChanged = scalingAbsoluteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingAbsoluteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` scalingAbsolute: bool `
    ///
    pub fn scalingAbsoluteChanged(self: QCustom3DItem, scalingAbsolute: bool) void {
        qtc.QCustom3DItem_ScalingAbsoluteChanged(@ptrCast(self.ptr), scalingAbsolute);
    }

    /// ### DEPRECATED: Use `onScalingAbsoluteChanged` instead
    ///
    pub const OnScalingAbsoluteChanged = onScalingAbsoluteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#scalingAbsoluteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, scalingAbsolute: bool) callconv(.c) void `
    ///
    pub fn onScalingAbsoluteChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, bool) callconv(.c) void) void {
        qtc.QCustom3DItem_Connect_ScalingAbsoluteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QCustom3DItem_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DItem.tr2: Memory allocation failed");
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
        var _str = qtc.QCustom3DItem_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DItem.tr3: Memory allocation failed");
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
    /// ` self: QCustom3DItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCustom3DItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCustom3DItem.objectName: Memory allocation failed");
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
    /// ` self: QCustom3DItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCustom3DItem, name: []const u8) void {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn isWidgetType(self: QCustom3DItem) bool {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn isWindowType(self: QCustom3DItem) bool {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn isQuickItemType(self: QCustom3DItem) bool {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn signalsBlocked(self: QCustom3DItem) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCustom3DItem, b: bool) bool {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn thread(self: QCustom3DItem) QThread {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCustom3DItem, _thread: anytype) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCustom3DItem, interval: i32) i32 {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCustom3DItem, time: i64) i32 {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCustom3DItem, id: i32) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCustom3DItem, id: i32) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCustom3DItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCustom3DItem.children: Memory allocation failed");
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCustom3DItem, _parent: anytype) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCustom3DItem, filterObj: anytype) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCustom3DItem, obj: anytype) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCustom3DItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn disconnect3(self: QCustom3DItem) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCustom3DItem, receiver: anytype) bool {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn dumpObjectTree(self: QCustom3DItem) void {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn dumpObjectInfo(self: QCustom3DItem) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCustom3DItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCustom3DItem, name: [:0]const u8) QVariant {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCustom3DItem, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCustom3DItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCustom3DItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCustom3DItem `
    ///
    pub fn bindingStorage(self: QCustom3DItem) QBindingStorage {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn bindingStorage2(self: QCustom3DItem) QBindingStorage {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn destroyed(self: QCustom3DItem) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCustom3DItem, callback: *const fn (QCustom3DItem) callconv(.c) void) void {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn parent(self: QCustom3DItem) QObject {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCustom3DItem, classname: [:0]const u8) bool {
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
    /// ` self: QCustom3DItem `
    ///
    pub fn deleteLater(self: QCustom3DItem) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCustom3DItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCustom3DItem, time: i64, timerType: i32) i32 {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCustom3DItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCustom3DItem, signal: [:0]const u8) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCustom3DItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCustom3DItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCustom3DItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCustom3DItem, param1: anytype) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QObject) callconv(.c) void) void {
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCustom3DItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DItem_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCustom3DItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QEvent) callconv(.c) bool) void {
        qtc.QCustom3DItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCustom3DItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCustom3DItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCustom3DItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCustom3DItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCustom3DItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCustom3DItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCustom3DItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCustom3DItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QTimerEvent) callconv(.c) void) void {
        qtc.QCustom3DItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCustom3DItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCustom3DItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCustom3DItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCustom3DItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QChildEvent) callconv(.c) void) void {
        qtc.QCustom3DItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCustom3DItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCustom3DItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCustom3DItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCustom3DItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QEvent) callconv(.c) void) void {
        qtc.QCustom3DItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCustom3DItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCustom3DItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QMetaMethod) callconv(.c) void) void {
        qtc.QCustom3DItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCustom3DItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCustom3DItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCustom3DItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DItem`
    ///
    /// ` callback: *const fn (self: QCustom3DItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCustom3DItem, callback: *const fn (QCustom3DItem, QMetaMethod) callconv(.c) void) void {
        qtc.QCustom3DItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCustom3DItem `
    ///
    pub fn sender(self: QCustom3DItem) QObject {
        return .{ .ptr = qtc.QCustom3DItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCustom3DItem `
    ///
    pub fn senderSignalIndex(self: QCustom3DItem) i32 {
        return qtc.QCustom3DItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCustom3DItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCustom3DItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCustom3DItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCustom3DItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCustom3DItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCustom3DItem `
    ///
    /// ` callback: *const fn (self: QCustom3DItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCustom3DItem, callback: *const fn (QCustom3DItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem-qtdatavis.html#dtor.QCustom3DItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCustom3DItem `
    ///
    pub fn delete(self: QCustom3DItem) void {
        qtc.QCustom3DItem_Delete(@ptrCast(self.ptr));
    }
};
