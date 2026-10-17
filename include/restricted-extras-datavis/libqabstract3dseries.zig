const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QLinearGradient = @import("libqt6").QLinearGradient;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQuaternion = @import("libqt6").QQuaternion;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const q3dtheme_enums = @import("libq3dtheme.zig").enums;
const qabstract3dseries_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html)
pub const QAbstract3DSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstract3DSeries,

    pub const _is_QAbstract3DSeries = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn metaObject(self: QAbstract3DSeries) QMetaObject {
        return .{ .ptr = qtc.QAbstract3DSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstract3DSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstract3DSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAbstract3DSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstract3DSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QAbstract3DSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dseries_enums.SeriesType `
    ///
    pub fn type0(self: QAbstract3DSeries) i32 {
        return qtc.QAbstract3DSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemLabelFormat` instead
    ///
    pub const SetItemLabelFormat = setItemLabelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setItemLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setItemLabelFormat(self: QAbstract3DSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstract3DSeries_SetItemLabelFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `itemLabelFormat` instead
    ///
    pub const ItemLabelFormat = itemLabelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn itemLabelFormat(self: QAbstract3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_ItemLabelFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.itemLabelFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QAbstract3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn isVisible(self: QAbstract3DSeries) bool {
        return qtc.QAbstract3DSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMesh` instead
    ///
    pub const SetMesh = setMesh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _mesh: qabstract3dseries_enums.Mesh `
    ///
    pub fn setMesh(self: QAbstract3DSeries, _mesh: i32) void {
        qtc.QAbstract3DSeries_SetMesh(@ptrCast(self.ptr), @bitCast(_mesh));
    }

    /// ### DEPRECATED: Use `mesh` instead
    ///
    pub const Mesh = mesh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#mesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dseries_enums.Mesh `
    ///
    pub fn mesh(self: QAbstract3DSeries) i32 {
        return qtc.QAbstract3DSeries_Mesh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMeshSmooth` instead
    ///
    pub const SetMeshSmooth = setMeshSmooth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMeshSmooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setMeshSmooth(self: QAbstract3DSeries, enable: bool) void {
        qtc.QAbstract3DSeries_SetMeshSmooth(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isMeshSmooth` instead
    ///
    pub const IsMeshSmooth = isMeshSmooth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#isMeshSmooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn isMeshSmooth(self: QAbstract3DSeries) bool {
        return qtc.QAbstract3DSeries_IsMeshSmooth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMeshRotation` instead
    ///
    pub const SetMeshRotation = setMeshRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMeshRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` rotation: QQuaternion `
    ///
    pub fn setMeshRotation(self: QAbstract3DSeries, rotation: anytype) void {
        comptime _ = @TypeOf(rotation)._is_QQuaternion;
        qtc.QAbstract3DSeries_SetMeshRotation(@ptrCast(self.ptr), @ptrCast(rotation.ptr));
    }

    /// ### DEPRECATED: Use `meshRotation` instead
    ///
    pub const MeshRotation = meshRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn meshRotation(self: QAbstract3DSeries) QQuaternion {
        return .{ .ptr = qtc.QAbstract3DSeries_MeshRotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMeshAxisAndAngle` instead
    ///
    pub const SetMeshAxisAndAngle = setMeshAxisAndAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMeshAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn setMeshAxisAndAngle(self: QAbstract3DSeries, axis: anytype, angle: f32) void {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        qtc.QAbstract3DSeries_SetMeshAxisAndAngle(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `setUserDefinedMesh` instead
    ///
    pub const SetUserDefinedMesh = setUserDefinedMesh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setUserDefinedMesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setUserDefinedMesh(self: QAbstract3DSeries, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QAbstract3DSeries_SetUserDefinedMesh(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `userDefinedMesh` instead
    ///
    pub const UserDefinedMesh = userDefinedMesh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#userDefinedMesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userDefinedMesh(self: QAbstract3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_UserDefinedMesh(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.userDefinedMesh: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColorStyle` instead
    ///
    pub const SetColorStyle = setColorStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setColorStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` style: q3dtheme_enums.ColorStyle `
    ///
    pub fn setColorStyle(self: QAbstract3DSeries, style: i32) void {
        qtc.QAbstract3DSeries_SetColorStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `colorStyle` instead
    ///
    pub const ColorStyle = colorStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#colorStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` q3dtheme_enums.ColorStyle `
    ///
    pub fn colorStyle(self: QAbstract3DSeries) i32 {
        return qtc.QAbstract3DSeries_ColorStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaseColor` instead
    ///
    pub const SetBaseColor = setBaseColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setBaseColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setBaseColor(self: QAbstract3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SetBaseColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `baseColor` instead
    ///
    pub const BaseColor = baseColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn baseColor(self: QAbstract3DSeries) QColor {
        return .{ .ptr = qtc.QAbstract3DSeries_BaseColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseGradient` instead
    ///
    pub const SetBaseGradient = setBaseGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setBaseGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setBaseGradient(self: QAbstract3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SetBaseGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `baseGradient` instead
    ///
    pub const BaseGradient = baseGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn baseGradient(self: QAbstract3DSeries) QLinearGradient {
        return .{ .ptr = qtc.QAbstract3DSeries_BaseGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSingleHighlightColor` instead
    ///
    pub const SetSingleHighlightColor = setSingleHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setSingleHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setSingleHighlightColor(self: QAbstract3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SetSingleHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `singleHighlightColor` instead
    ///
    pub const SingleHighlightColor = singleHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn singleHighlightColor(self: QAbstract3DSeries) QColor {
        return .{ .ptr = qtc.QAbstract3DSeries_SingleHighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSingleHighlightGradient` instead
    ///
    pub const SetSingleHighlightGradient = setSingleHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setSingleHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setSingleHighlightGradient(self: QAbstract3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SetSingleHighlightGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `singleHighlightGradient` instead
    ///
    pub const SingleHighlightGradient = singleHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn singleHighlightGradient(self: QAbstract3DSeries) QLinearGradient {
        return .{ .ptr = qtc.QAbstract3DSeries_SingleHighlightGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMultiHighlightColor` instead
    ///
    pub const SetMultiHighlightColor = setMultiHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMultiHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setMultiHighlightColor(self: QAbstract3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SetMultiHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `multiHighlightColor` instead
    ///
    pub const MultiHighlightColor = multiHighlightColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn multiHighlightColor(self: QAbstract3DSeries) QColor {
        return .{ .ptr = qtc.QAbstract3DSeries_MultiHighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMultiHighlightGradient` instead
    ///
    pub const SetMultiHighlightGradient = setMultiHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMultiHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setMultiHighlightGradient(self: QAbstract3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SetMultiHighlightGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `multiHighlightGradient` instead
    ///
    pub const MultiHighlightGradient = multiHighlightGradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn multiHighlightGradient(self: QAbstract3DSeries) QLinearGradient {
        return .{ .ptr = qtc.QAbstract3DSeries_MultiHighlightGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QAbstract3DSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstract3DSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QAbstract3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `itemLabel` instead
    ///
    pub const ItemLabel = itemLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn itemLabel(self: QAbstract3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_ItemLabel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.itemLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemLabelVisible` instead
    ///
    pub const SetItemLabelVisible = setItemLabelVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setItemLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setItemLabelVisible(self: QAbstract3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_SetItemLabelVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isItemLabelVisible` instead
    ///
    pub const IsItemLabelVisible = isItemLabelVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#isItemLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn isItemLabelVisible(self: QAbstract3DSeries) bool {
        return qtc.QAbstract3DSeries_IsItemLabelVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemLabelFormatChanged` instead
    ///
    pub const ItemLabelFormatChanged = itemLabelFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn itemLabelFormatChanged(self: QAbstract3DSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstract3DSeries_ItemLabelFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onItemLabelFormatChanged` instead
    ///
    pub const OnItemLabelFormatChanged = onItemLabelFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onItemLabelFormatChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ItemLabelFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibilityChanged` instead
    ///
    pub const VisibilityChanged = visibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn visibilityChanged(self: QAbstract3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_VisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibilityChanged` instead
    ///
    pub const OnVisibilityChanged = onVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibilityChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, bool) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `meshChanged` instead
    ///
    pub const MeshChanged = meshChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _mesh: qabstract3dseries_enums.Mesh `
    ///
    pub fn meshChanged(self: QAbstract3DSeries, _mesh: i32) void {
        qtc.QAbstract3DSeries_MeshChanged(@ptrCast(self.ptr), @bitCast(_mesh));
    }

    /// ### DEPRECATED: Use `onMeshChanged` instead
    ///
    pub const OnMeshChanged = onMeshChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, mesh: qabstract3dseries_enums.Mesh) callconv(.c) void `
    ///
    pub fn onMeshChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, i32) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MeshChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `meshSmoothChanged` instead
    ///
    pub const MeshSmoothChanged = meshSmoothChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshSmoothChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn meshSmoothChanged(self: QAbstract3DSeries, enabled: bool) void {
        qtc.QAbstract3DSeries_MeshSmoothChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onMeshSmoothChanged` instead
    ///
    pub const OnMeshSmoothChanged = onMeshSmoothChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshSmoothChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, enabled: bool) callconv(.c) void `
    ///
    pub fn onMeshSmoothChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, bool) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MeshSmoothChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `meshRotationChanged` instead
    ///
    pub const MeshRotationChanged = meshRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` rotation: QQuaternion `
    ///
    pub fn meshRotationChanged(self: QAbstract3DSeries, rotation: anytype) void {
        comptime _ = @TypeOf(rotation)._is_QQuaternion;
        qtc.QAbstract3DSeries_MeshRotationChanged(@ptrCast(self.ptr), @ptrCast(rotation.ptr));
    }

    /// ### DEPRECATED: Use `onMeshRotationChanged` instead
    ///
    pub const OnMeshRotationChanged = onMeshRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, rotation: QQuaternion) callconv(.c) void `
    ///
    pub fn onMeshRotationChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QQuaternion) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MeshRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `userDefinedMeshChanged` instead
    ///
    pub const UserDefinedMeshChanged = userDefinedMeshChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#userDefinedMeshChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn userDefinedMeshChanged(self: QAbstract3DSeries, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QAbstract3DSeries_UserDefinedMeshChanged(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `onUserDefinedMeshChanged` instead
    ///
    pub const OnUserDefinedMeshChanged = onUserDefinedMeshChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#userDefinedMeshChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, fileName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onUserDefinedMeshChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_UserDefinedMeshChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorStyleChanged` instead
    ///
    pub const ColorStyleChanged = colorStyleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#colorStyleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` style: q3dtheme_enums.ColorStyle `
    ///
    pub fn colorStyleChanged(self: QAbstract3DSeries, style: i32) void {
        qtc.QAbstract3DSeries_ColorStyleChanged(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onColorStyleChanged` instead
    ///
    pub const OnColorStyleChanged = onColorStyleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#colorStyleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, style: q3dtheme_enums.ColorStyle) callconv(.c) void `
    ///
    pub fn onColorStyleChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, i32) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ColorStyleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseColorChanged` instead
    ///
    pub const BaseColorChanged = baseColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn baseColorChanged(self: QAbstract3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_BaseColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onBaseColorChanged` instead
    ///
    pub const OnBaseColorChanged = onBaseColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onBaseColorChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QColor) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_BaseColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseGradientChanged` instead
    ///
    pub const BaseGradientChanged = baseGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn baseGradientChanged(self: QAbstract3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_BaseGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onBaseGradientChanged` instead
    ///
    pub const OnBaseGradientChanged = onBaseGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onBaseGradientChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QLinearGradient) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_BaseGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `singleHighlightColorChanged` instead
    ///
    pub const SingleHighlightColorChanged = singleHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn singleHighlightColorChanged(self: QAbstract3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SingleHighlightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSingleHighlightColorChanged` instead
    ///
    pub const OnSingleHighlightColorChanged = onSingleHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onSingleHighlightColorChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QColor) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_SingleHighlightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `singleHighlightGradientChanged` instead
    ///
    pub const SingleHighlightGradientChanged = singleHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn singleHighlightGradientChanged(self: QAbstract3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SingleHighlightGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onSingleHighlightGradientChanged` instead
    ///
    pub const OnSingleHighlightGradientChanged = onSingleHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onSingleHighlightGradientChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QLinearGradient) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_SingleHighlightGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiHighlightColorChanged` instead
    ///
    pub const MultiHighlightColorChanged = multiHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn multiHighlightColorChanged(self: QAbstract3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_MultiHighlightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onMultiHighlightColorChanged` instead
    ///
    pub const OnMultiHighlightColorChanged = onMultiHighlightColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onMultiHighlightColorChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QColor) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MultiHighlightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiHighlightGradientChanged` instead
    ///
    pub const MultiHighlightGradientChanged = multiHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn multiHighlightGradientChanged(self: QAbstract3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_MultiHighlightGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onMultiHighlightGradientChanged` instead
    ///
    pub const OnMultiHighlightGradientChanged = onMultiHighlightGradientChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onMultiHighlightGradientChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QLinearGradient) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MultiHighlightGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nameChanged` instead
    ///
    pub const NameChanged = nameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn nameChanged(self: QAbstract3DSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstract3DSeries_NameChanged(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onNameChanged` instead
    ///
    pub const OnNameChanged = onNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemLabelChanged` instead
    ///
    pub const ItemLabelChanged = itemLabelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` label: []const u8 `
    ///
    pub fn itemLabelChanged(self: QAbstract3DSeries, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QAbstract3DSeries_ItemLabelChanged(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `onItemLabelChanged` instead
    ///
    pub const OnItemLabelChanged = onItemLabelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, label: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onItemLabelChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ItemLabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemLabelVisibilityChanged` instead
    ///
    pub const ItemLabelVisibilityChanged = itemLabelVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn itemLabelVisibilityChanged(self: QAbstract3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_ItemLabelVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onItemLabelVisibilityChanged` instead
    ///
    pub const OnItemLabelVisibilityChanged = onItemLabelVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onItemLabelVisibilityChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, bool) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ItemLabelVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QAbstract3DSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.tr2: Memory allocation failed");
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
        var _str = qtc.QAbstract3DSeries_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.tr3: Memory allocation failed");
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstract3DSeries, _event: anytype) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstract3DSeries, watched: anytype, _event: anytype) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstract3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DSeries.objectName: Memory allocation failed");
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstract3DSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn isWidgetType(self: QAbstract3DSeries) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn isWindowType(self: QAbstract3DSeries) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn isQuickItemType(self: QAbstract3DSeries) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn signalsBlocked(self: QAbstract3DSeries) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstract3DSeries, b: bool) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn thread(self: QAbstract3DSeries) QThread {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstract3DSeries, _thread: anytype) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstract3DSeries, interval: i32) i32 {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstract3DSeries, time: i64) i32 {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstract3DSeries, id: i32) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstract3DSeries, id: i32) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstract3DSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstract3DSeries.children: Memory allocation failed");
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstract3DSeries, _parent: anytype) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstract3DSeries, filterObj: anytype) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstract3DSeries, obj: anytype) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstract3DSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn disconnect3(self: QAbstract3DSeries) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstract3DSeries, receiver: anytype) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn dumpObjectTree(self: QAbstract3DSeries) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn dumpObjectInfo(self: QAbstract3DSeries) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstract3DSeries, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QAbstract3DSeries, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstract3DSeries, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstract3DSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstract3DSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn bindingStorage(self: QAbstract3DSeries) QBindingStorage {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn bindingStorage2(self: QAbstract3DSeries) QBindingStorage {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn destroyed(self: QAbstract3DSeries) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries) callconv(.c) void) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn parent(self: QAbstract3DSeries) QObject {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstract3DSeries, classname: [:0]const u8) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    pub fn deleteLater(self: QAbstract3DSeries) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstract3DSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstract3DSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstract3DSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstract3DSeries, signal: [:0]const u8) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstract3DSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstract3DSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstract3DSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstract3DSeries, param1: anytype) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstract3DSeries `
    ///
    /// ` callback: *const fn (self: QAbstract3DSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstract3DSeries, callback: *const fn (QAbstract3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#dtor.QAbstract3DSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstract3DSeries `
    ///
    pub fn delete(self: QAbstract3DSeries) void {
        qtc.QAbstract3DSeries_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#public-types)
pub const enums = struct {
    pub const SeriesType = enum {
        pub const SeriesTypeNone: i32 = 0;
        pub const SeriesTypeBar: i32 = 1;
        pub const SeriesTypeScatter: i32 = 2;
        pub const SeriesTypeSurface: i32 = 4;
    };

    pub const Mesh = enum {
        pub const MeshUserDefined: i32 = 0;
        pub const MeshBar: i32 = 1;
        pub const MeshCube: i32 = 2;
        pub const MeshPyramid: i32 = 3;
        pub const MeshCone: i32 = 4;
        pub const MeshCylinder: i32 = 5;
        pub const MeshBevelBar: i32 = 6;
        pub const MeshBevelCube: i32 = 7;
        pub const MeshSphere: i32 = 8;
        pub const MeshMinimal: i32 = 9;
        pub const MeshArrow: i32 = 10;
        pub const MeshPoint: i32 = 11;
    };
};
