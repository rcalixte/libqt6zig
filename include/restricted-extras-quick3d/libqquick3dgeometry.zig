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
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquick3dgeometry_enums = enums;
const qquick3dobject_enums = @import("libqquick3dobject.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html)
pub const QQuick3DGeometry = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DGeometry,

    pub const _is_QQuick3DGeometry = {};
    pub const _is_QQuick3DObject = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DGeometry object in C++ memory
    ///
    pub fn new() QQuick3DGeometry {
        return .{ .ptr = qtc.QQuick3DGeometry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DGeometry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuick3DObject `
    ///
    pub fn new2(_parent: anytype) QQuick3DGeometry {
        comptime _ = @TypeOf(_parent)._is_QQuick3DObject;
        return .{ .ptr = qtc.QQuick3DGeometry_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn metaObject(self: QQuick3DGeometry) QMetaObject {
        return .{ .ptr = qtc.QQuick3DGeometry_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuick3DGeometry, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuick3DGeometry_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superMetaObject(self: QQuick3DGeometry) QMetaObject {
        return .{ .ptr = qtc.QQuick3DGeometry_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuick3DGeometry, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DGeometry_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuick3DGeometry_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuick3DGeometry, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DGeometry_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuick3DGeometry, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DGeometry_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuick3DGeometry_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuick3DGeometry, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DGeometry_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuick3DGeometry_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DGeometry.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `vertexData` instead
    ///
    pub const VertexData = vertexData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#vertexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn vertexData(self: QQuick3DGeometry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QQuick3DGeometry_VertexData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QQuick3DGeometry.vertexData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `indexData` instead
    ///
    pub const IndexData = indexData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#indexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn indexData(self: QQuick3DGeometry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QQuick3DGeometry_IndexData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QQuick3DGeometry.indexData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `attributeCount` instead
    ///
    pub const AttributeCount = attributeCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#attributeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn attributeCount(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_AttributeCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` index: i32 `
    ///
    pub fn attribute(self: QQuick3DGeometry, index: i32) QQuick3DGeometry__Attribute {
        return .{ .ptr = qtc.QQuick3DGeometry_Attribute(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `primitiveType` instead
    ///
    pub const PrimitiveType = primitiveType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#primitiveType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ## Returns:
    ///
    /// ` qquick3dgeometry_enums.PrimitiveType `
    ///
    pub fn primitiveType(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_PrimitiveType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `boundsMin` instead
    ///
    pub const BoundsMin = boundsMin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#boundsMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn boundsMin(self: QQuick3DGeometry) QVector3D {
        return .{ .ptr = qtc.QQuick3DGeometry_BoundsMin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `boundsMax` instead
    ///
    pub const BoundsMax = boundsMax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#boundsMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn boundsMax(self: QQuick3DGeometry) QVector3D {
        return .{ .ptr = qtc.QQuick3DGeometry_BoundsMax(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `stride` instead
    ///
    pub const Stride = stride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#stride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn stride(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_Stride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVertexData` instead
    ///
    pub const SetVertexData = setVertexData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setVertexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` data: []u8 `
    ///
    pub fn setVertexData(self: QQuick3DGeometry, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DGeometry_SetVertexData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `setVertexData2` instead
    ///
    pub const SetVertexData2 = setVertexData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setVertexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` offset: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn setVertexData2(self: QQuick3DGeometry, offset: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DGeometry_SetVertexData2(@ptrCast(self.ptr), @bitCast(offset), data_str);
    }

    /// ### DEPRECATED: Use `setIndexData` instead
    ///
    pub const SetIndexData = setIndexData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setIndexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` data: []u8 `
    ///
    pub fn setIndexData(self: QQuick3DGeometry, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DGeometry_SetIndexData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `setIndexData2` instead
    ///
    pub const SetIndexData2 = setIndexData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setIndexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` offset: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn setIndexData2(self: QQuick3DGeometry, offset: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DGeometry_SetIndexData2(@ptrCast(self.ptr), @bitCast(offset), data_str);
    }

    /// ### DEPRECATED: Use `setStride` instead
    ///
    pub const SetStride = setStride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setStride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _stride: i32 `
    ///
    pub fn setStride(self: QQuick3DGeometry, _stride: i32) void {
        qtc.QQuick3DGeometry_SetStride(@ptrCast(self.ptr), @bitCast(_stride));
    }

    /// ### DEPRECATED: Use `setBounds` instead
    ///
    pub const SetBounds = setBounds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setBounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` min: QVector3D `
    ///
    /// ` max: QVector3D `
    ///
    pub fn setBounds(self: QQuick3DGeometry, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QVector3D;
        comptime _ = @TypeOf(max)._is_QVector3D;
        qtc.QQuick3DGeometry_SetBounds(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### DEPRECATED: Use `setPrimitiveType` instead
    ///
    pub const SetPrimitiveType = setPrimitiveType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setPrimitiveType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` typeVal: qquick3dgeometry_enums.PrimitiveType `
    ///
    pub fn setPrimitiveType(self: QQuick3DGeometry, typeVal: i32) void {
        qtc.QQuick3DGeometry_SetPrimitiveType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `addAttribute` instead
    ///
    pub const AddAttribute = addAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` semantic: qquick3dgeometry_enums.Semantic `
    ///
    /// ` offset: i32 `
    ///
    /// ` componentType: qquick3dgeometry_enums.ComponentType `
    ///
    pub fn addAttribute(self: QQuick3DGeometry, semantic: i32, offset: i32, componentType: i32) void {
        qtc.QQuick3DGeometry_AddAttribute(@ptrCast(self.ptr), @bitCast(semantic), @bitCast(offset), @bitCast(componentType));
    }

    /// ### DEPRECATED: Use `addAttribute2` instead
    ///
    pub const AddAttribute2 = addAttribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` att: QQuick3DGeometry__Attribute `
    ///
    pub fn addAttribute2(self: QQuick3DGeometry, att: anytype) void {
        comptime _ = @TypeOf(att)._is_QQuick3DGeometry__Attribute;
        qtc.QQuick3DGeometry_AddAttribute2(@ptrCast(self.ptr), @ptrCast(att.ptr));
    }

    /// ### DEPRECATED: Use `subsetCount` instead
    ///
    pub const SubsetCount = subsetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn subsetCount(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_SubsetCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `subsetBoundsMin` instead
    ///
    pub const SubsetBoundsMin = subsetBoundsMin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetBoundsMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` subset: i32 `
    ///
    pub fn subsetBoundsMin(self: QQuick3DGeometry, subset: i32) QVector3D {
        return .{ .ptr = qtc.QQuick3DGeometry_SubsetBoundsMin(@ptrCast(self.ptr), @bitCast(subset)) };
    }

    /// ### DEPRECATED: Use `subsetBoundsMax` instead
    ///
    pub const SubsetBoundsMax = subsetBoundsMax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetBoundsMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` subset: i32 `
    ///
    pub fn subsetBoundsMax(self: QQuick3DGeometry, subset: i32) QVector3D {
        return .{ .ptr = qtc.QQuick3DGeometry_SubsetBoundsMax(@ptrCast(self.ptr), @bitCast(subset)) };
    }

    /// ### DEPRECATED: Use `subsetOffset` instead
    ///
    pub const SubsetOffset = subsetOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` subset: i32 `
    ///
    pub fn subsetOffset(self: QQuick3DGeometry, subset: i32) i32 {
        return qtc.QQuick3DGeometry_SubsetOffset(@ptrCast(self.ptr), @bitCast(subset));
    }

    /// ### DEPRECATED: Use `subsetCount2` instead
    ///
    pub const SubsetCount2 = subsetCount2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` subset: i32 `
    ///
    pub fn subsetCount2(self: QQuick3DGeometry, subset: i32) i32 {
        return qtc.QQuick3DGeometry_SubsetCount2(@ptrCast(self.ptr), @bitCast(subset));
    }

    /// ### DEPRECATED: Use `subsetName` instead
    ///
    pub const SubsetName = subsetName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#subsetName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` subset: i32 `
    ///
    pub fn subsetName(self: QQuick3DGeometry, allocator: std.mem.Allocator, subset: i32) []const u8 {
        var _str = qtc.QQuick3DGeometry_SubsetName(@ptrCast(self.ptr), @bitCast(subset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DGeometry.subsetName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addSubset` instead
    ///
    pub const AddSubset = addSubset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addSubset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` offset: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _boundsMin: QVector3D `
    ///
    /// ` _boundsMax: QVector3D `
    ///
    pub fn addSubset(self: QQuick3DGeometry, offset: i32, count: i32, _boundsMin: anytype, _boundsMax: anytype) void {
        comptime _ = @TypeOf(_boundsMin)._is_QVector3D;
        comptime _ = @TypeOf(_boundsMax)._is_QVector3D;
        qtc.QQuick3DGeometry_AddSubset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), @ptrCast(_boundsMin.ptr), @ptrCast(_boundsMax.ptr));
    }

    /// ### DEPRECATED: Use `targetData` instead
    ///
    pub const TargetData = targetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#targetData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn targetData(self: QQuick3DGeometry, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QQuick3DGeometry_TargetData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QQuick3DGeometry.targetData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTargetData` instead
    ///
    pub const SetTargetData = setTargetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setTargetData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` data: []u8 `
    ///
    pub fn setTargetData(self: QQuick3DGeometry, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DGeometry_SetTargetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `setTargetData2` instead
    ///
    pub const SetTargetData2 = setTargetData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#setTargetData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` offset: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn setTargetData2(self: QQuick3DGeometry, offset: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QQuick3DGeometry_SetTargetData2(@ptrCast(self.ptr), @bitCast(offset), data_str);
    }

    /// ### DEPRECATED: Use `targetAttribute` instead
    ///
    pub const TargetAttribute = targetAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#targetAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` index: i32 `
    ///
    pub fn targetAttribute(self: QQuick3DGeometry, index: i32) QQuick3DGeometry__TargetAttribute {
        return .{ .ptr = qtc.QQuick3DGeometry_TargetAttribute(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `targetAttributeCount` instead
    ///
    pub const TargetAttributeCount = targetAttributeCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#targetAttributeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn targetAttributeCount(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_TargetAttributeCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addTargetAttribute` instead
    ///
    pub const AddTargetAttribute = addTargetAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addTargetAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` targetId: u32 `
    ///
    /// ` semantic: qquick3dgeometry_enums.Semantic `
    ///
    /// ` offset: i32 `
    ///
    pub fn addTargetAttribute(self: QQuick3DGeometry, targetId: u32, semantic: i32, offset: i32) void {
        qtc.QQuick3DGeometry_AddTargetAttribute(@ptrCast(self.ptr), @bitCast(targetId), @bitCast(semantic), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `addTargetAttribute2` instead
    ///
    pub const AddTargetAttribute2 = addTargetAttribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addTargetAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` att: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn addTargetAttribute2(self: QQuick3DGeometry, att: anytype) void {
        comptime _ = @TypeOf(att)._is_QQuick3DGeometry__TargetAttribute;
        qtc.QQuick3DGeometry_AddTargetAttribute2(@ptrCast(self.ptr), @ptrCast(att.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn clear(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometryNodeDirty` instead
    ///
    pub const GeometryNodeDirty = geometryNodeDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryNodeDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn geometryNodeDirty(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_GeometryNodeDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryNodeDirty` instead
    ///
    pub const OnGeometryNodeDirty = onGeometryNodeDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryNodeDirty)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry) callconv(.c) void `
    ///
    pub fn onGeometryNodeDirty(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry) callconv(.c) void) void {
        qtc.QQuick3DGeometry_Connect_GeometryNodeDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometryChanged` instead
    ///
    pub const GeometryChanged = geometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn geometryChanged(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_GeometryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChanged` instead
    ///
    pub const OnGeometryChanged = onGeometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry) callconv(.c) void `
    ///
    pub fn onGeometryChanged(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry) callconv(.c) void) void {
        qtc.QQuick3DGeometry_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markAllDirty` instead
    ///
    pub const MarkAllDirty = markAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#markAllDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn markAllDirty(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_MarkAllDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAllDirty` instead
    ///
    pub const OnMarkAllDirty = onMarkAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#markAllDirty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onMarkAllDirty(self: QQuick3DGeometry, callback: *const fn () callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnMarkAllDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMarkAllDirty` instead
    ///
    pub const SuperMarkAllDirty = superMarkAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#markAllDirty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superMarkAllDirty(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_SuperMarkAllDirty(@ptrCast(self.ptr));
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
        var _str = qtc.QQuick3DGeometry_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DGeometry.tr2: Memory allocation failed");
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
        var _str = qtc.QQuick3DGeometry_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DGeometry.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addSubset5` instead
    ///
    pub const AddSubset5 = addSubset5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addSubset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` offset: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _boundsMin: QVector3D `
    ///
    /// ` _boundsMax: QVector3D `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addSubset5(self: QQuick3DGeometry, offset: i32, count: i32, _boundsMin: anytype, _boundsMax: anytype, name: []const u8) void {
        comptime _ = @TypeOf(_boundsMin)._is_QVector3D;
        comptime _ = @TypeOf(_boundsMax)._is_QVector3D;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QQuick3DGeometry_AddSubset5(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), @ptrCast(_boundsMin.ptr), @ptrCast(_boundsMax.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addTargetAttribute4` instead
    ///
    pub const AddTargetAttribute4 = addTargetAttribute4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#addTargetAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` targetId: u32 `
    ///
    /// ` semantic: qquick3dgeometry_enums.Semantic `
    ///
    /// ` offset: i32 `
    ///
    /// ` _stride: i32 `
    ///
    pub fn addTargetAttribute4(self: QQuick3DGeometry, targetId: u32, semantic: i32, offset: i32, _stride: i32) void {
        qtc.QQuick3DGeometry_AddTargetAttribute4(@ptrCast(self.ptr), @bitCast(targetId), @bitCast(semantic), @bitCast(offset), @bitCast(_stride));
    }

    /// Inherited from QQuick3DObject
    ///
    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn asQQmlParserStatus(self: QQuick3DGeometry) QQmlParserStatus {
        return .{ .ptr = qtc.QQuick3DObject_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Inherited from QQuick3DObject
    ///
    /// Downcasts to a QQuick3DGeometry object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuick3DGeometry {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuick3DGeometry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuick3DObject_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DGeometry.state: Memory allocation failed");
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuick3DGeometry, _state: []const u8) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuick3DGeometry, allocator: std.mem.Allocator) []QQuick3DObject {
        const _arr: qtc.libqt_list = qtc.QQuick3DObject_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuick3DObject, _arr.len) catch @panic("QQuick3DGeometry.childItems: Memory allocation failed");
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn parentItem(self: QQuick3DGeometry) QQuick3DObject {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn update(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _parentItem: QQuick3DObject `
    ///
    pub fn setParentItem(self: QQuick3DGeometry, _parentItem: anytype) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn parentChanged(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry) callconv(.c) void) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn childrenChanged(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry) callconv(.c) void) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn stateChanged(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry) callconv(.c) void) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuick3DGeometry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DGeometry.objectName: Memory allocation failed");
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuick3DGeometry, name: []const u8) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn isWidgetType(self: QQuick3DGeometry) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn isWindowType(self: QQuick3DGeometry) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn isQuickItemType(self: QQuick3DGeometry) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn signalsBlocked(self: QQuick3DGeometry) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuick3DGeometry, b: bool) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn thread(self: QQuick3DGeometry) QThread {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuick3DGeometry, _thread: anytype) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuick3DGeometry, interval: i32) i32 {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuick3DGeometry, time: i64) i32 {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuick3DGeometry, id: i32) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuick3DGeometry, id: i32) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuick3DGeometry, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuick3DGeometry.children: Memory allocation failed");
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuick3DGeometry, _parent: anytype) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuick3DGeometry, filterObj: anytype) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuick3DGeometry, obj: anytype) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuick3DGeometry, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn disconnect3(self: QQuick3DGeometry) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuick3DGeometry, receiver: anytype) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn dumpObjectTree(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn dumpObjectInfo(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuick3DGeometry, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuick3DGeometry, name: [:0]const u8) QVariant {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuick3DGeometry, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuick3DGeometry.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuick3DGeometry.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn bindingStorage(self: QQuick3DGeometry) QBindingStorage {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn bindingStorage2(self: QQuick3DGeometry) QBindingStorage {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn destroyed(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry) callconv(.c) void) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn parent(self: QQuick3DGeometry) QObject {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuick3DGeometry, classname: [:0]const u8) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn deleteLater(self: QQuick3DGeometry) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuick3DGeometry, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuick3DGeometry, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuick3DGeometry, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuick3DGeometry, signal: [:0]const u8) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuick3DGeometry, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuick3DGeometry, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuick3DGeometry, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuick3DGeometry, param1: anytype) void {
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QQmlParserStatus
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: QQmlParserStatus `
    ///
    pub fn operatorAssign(self: QQuick3DGeometry, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlParserStatus;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlParserStatus")) param1.asQQmlParserStatus() else param1;
        qtc.QQmlParserStatus_OperatorAssign(@ptrCast(self.asQQmlParserStatus().ptr), @ptrCast(param1_.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn itemChange(self: QQuick3DGeometry, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DGeometry_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuick3DGeometry, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DGeometry_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, param1: qquick3dobject_enums.ItemChange, param2: QQuick3DObject__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, i32, QQuick3DObject__ItemChangeData) callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn classBegin(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_ClassBegin(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superClassBegin(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_SuperClassBegin(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuick3DGeometry, callback: *const fn () callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn componentComplete(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_ComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superComponentComplete(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_SuperComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuick3DGeometry, callback: *const fn () callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn preSync(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_PreSync(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superPreSync(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_SuperPreSync(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreSync(self: QQuick3DGeometry, callback: *const fn () callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnPreSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuick3DGeometry, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DGeometry_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQuick3DGeometry, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DGeometry_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DGeometry_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuick3DGeometry, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DGeometry_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuick3DGeometry, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DGeometry_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DGeometry_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuick3DGeometry, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DGeometry_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuick3DGeometry, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DGeometry_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QTimerEvent) callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuick3DGeometry, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DGeometry_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuick3DGeometry, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DGeometry_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QChildEvent) callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuick3DGeometry, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DGeometry_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuick3DGeometry, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DGeometry_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QEvent) callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuick3DGeometry, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DGeometry_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuick3DGeometry, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DGeometry_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuick3DGeometry, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DGeometry_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuick3DGeometry, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DGeometry_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DGeometry_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn isComponentComplete(self: QQuick3DGeometry) bool {
        return qtc.QQuick3DGeometry_IsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsComponentComplete` instead
    ///
    pub const SuperIsComponentComplete = superIsComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superIsComponentComplete(self: QQuick3DGeometry) bool {
        return qtc.QQuick3DGeometry_SuperIsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsComponentComplete` instead
    ///
    pub const OnIsComponentComplete = onIsComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsComponentComplete(self: QQuick3DGeometry, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuick3DGeometry_OnIsComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn sender(self: QQuick3DGeometry) QObject {
        return .{ .ptr = qtc.QQuick3DGeometry_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superSender(self: QQuick3DGeometry) QObject {
        return .{ .ptr = qtc.QQuick3DGeometry_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuick3DGeometry, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuick3DGeometry_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn senderSignalIndex(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    pub fn superSenderSignalIndex(self: QQuick3DGeometry) i32 {
        return qtc.QQuick3DGeometry_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuick3DGeometry, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuick3DGeometry_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuick3DGeometry, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuick3DGeometry_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuick3DGeometry, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuick3DGeometry_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuick3DGeometry_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuick3DGeometry, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuick3DGeometry_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuick3DGeometry, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuick3DGeometry_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DGeometry`
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuick3DGeometry_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DGeometry `
    ///
    /// ` callback: *const fn (self: QQuick3DGeometry, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuick3DGeometry, callback: *const fn (QQuick3DGeometry, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#dtor.QQuick3DGeometry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DGeometry `
    ///
    pub fn delete(self: QQuick3DGeometry) void {
        qtc.QQuick3DGeometry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html)
pub const QQuick3DGeometry__Attribute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DGeometry__Attribute,

    pub const _is_QQuick3DGeometry__Attribute = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DGeometry::Attribute object in C++ memory
    ///
    pub fn new() QQuick3DGeometry__Attribute {
        return .{ .ptr = qtc.QQuick3DGeometry__Attribute_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DGeometry::Attribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DGeometry__Attribute `
    ///
    pub fn new2(other: anytype) QQuick3DGeometry__Attribute {
        comptime _ = @TypeOf(other)._is_QQuick3DGeometry__Attribute;
        return .{ .ptr = qtc.QQuick3DGeometry__Attribute_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuick3DGeometry::Attribute object and invalidate the source QQuick3DGeometry::Attribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DGeometry__Attribute `
    ///
    pub fn new3(other: anytype) QQuick3DGeometry__Attribute {
        comptime _ = @TypeOf(other)._is_QQuick3DGeometry__Attribute;
        return .{ .ptr = qtc.QQuick3DGeometry__Attribute_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ` other: QQuick3DGeometry__Attribute `
    ///
    pub fn copyAssign(self: QQuick3DGeometry__Attribute, other: QQuick3DGeometry__Attribute) void {
        qtc.QQuick3DGeometry__Attribute_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ` other: QQuick3DGeometry__Attribute `
    ///
    pub fn moveAssign(self: QQuick3DGeometry__Attribute, other: QQuick3DGeometry__Attribute) void {
        qtc.QQuick3DGeometry__Attribute_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `semantic` instead
    ///
    pub const Semantic = semantic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#semantic-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qquick3dgeometry_enums.Semantic `
    ///
    pub fn semantic(self: QQuick3DGeometry__Attribute) i32 {
        return qtc.QQuick3DGeometry__Attribute_Semantic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSemantic` instead
    ///
    pub const SetSemantic = setSemantic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#semantic-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ` _semantic: qquick3dgeometry_enums.Semantic `
    ///
    pub fn setSemantic(self: QQuick3DGeometry__Attribute, _semantic: i32) void {
        qtc.QQuick3DGeometry__Attribute_SetSemantic(@ptrCast(self.ptr), @bitCast(_semantic));
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    pub fn offset(self: QQuick3DGeometry__Attribute) i32 {
        return qtc.QQuick3DGeometry__Attribute_Offset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ` _offset: i32 `
    ///
    pub fn setOffset(self: QQuick3DGeometry__Attribute, _offset: i32) void {
        qtc.QQuick3DGeometry__Attribute_SetOffset(@ptrCast(self.ptr), @bitCast(_offset));
    }

    /// ### DEPRECATED: Use `componentType` instead
    ///
    pub const ComponentType = componentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#componentType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qquick3dgeometry_enums.ComponentType `
    ///
    pub fn componentType(self: QQuick3DGeometry__Attribute) i32 {
        return qtc.QQuick3DGeometry__Attribute_ComponentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setComponentType` instead
    ///
    pub const SetComponentType = setComponentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-attribute.html#componentType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    /// ` _componentType: qquick3dgeometry_enums.ComponentType `
    ///
    pub fn setComponentType(self: QQuick3DGeometry__Attribute, _componentType: i32) void {
        qtc.QQuick3DGeometry__Attribute_SetComponentType(@ptrCast(self.ptr), @bitCast(_componentType));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DGeometry__Attribute `
    ///
    pub fn delete(self: QQuick3DGeometry__Attribute) void {
        qtc.QQuick3DGeometry__Attribute_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html)
pub const QQuick3DGeometry__TargetAttribute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DGeometry__TargetAttribute,

    pub const _is_QQuick3DGeometry__TargetAttribute = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DGeometry::TargetAttribute object in C++ memory
    ///
    pub fn new() QQuick3DGeometry__TargetAttribute {
        return .{ .ptr = qtc.QQuick3DGeometry__TargetAttribute_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DGeometry::TargetAttribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn new2(other: anytype) QQuick3DGeometry__TargetAttribute {
        comptime _ = @TypeOf(other)._is_QQuick3DGeometry__TargetAttribute;
        return .{ .ptr = qtc.QQuick3DGeometry__TargetAttribute_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuick3DGeometry::TargetAttribute object and invalidate the source QQuick3DGeometry::TargetAttribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn new3(other: anytype) QQuick3DGeometry__TargetAttribute {
        comptime _ = @TypeOf(other)._is_QQuick3DGeometry__TargetAttribute;
        return .{ .ptr = qtc.QQuick3DGeometry__TargetAttribute_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    /// ` other: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn copyAssign(self: QQuick3DGeometry__TargetAttribute, other: QQuick3DGeometry__TargetAttribute) void {
        qtc.QQuick3DGeometry__TargetAttribute_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    /// ` other: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn moveAssign(self: QQuick3DGeometry__TargetAttribute, other: QQuick3DGeometry__TargetAttribute) void {
        qtc.QQuick3DGeometry__TargetAttribute_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `targetId` instead
    ///
    pub const TargetId = targetId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#targetId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn targetId(self: QQuick3DGeometry__TargetAttribute) u32 {
        return qtc.QQuick3DGeometry__TargetAttribute_TargetId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTargetId` instead
    ///
    pub const SetTargetId = setTargetId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#targetId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    /// ` _targetId: u32 `
    ///
    pub fn setTargetId(self: QQuick3DGeometry__TargetAttribute, _targetId: u32) void {
        qtc.QQuick3DGeometry__TargetAttribute_SetTargetId(@ptrCast(self.ptr), @bitCast(_targetId));
    }

    /// ### DEPRECATED: Use `attr` instead
    ///
    pub const Attr = attr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#attr-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn attr(self: QQuick3DGeometry__TargetAttribute) QQuick3DGeometry__Attribute {
        return .{ .ptr = qtc.QQuick3DGeometry__TargetAttribute_Attr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttr` instead
    ///
    pub const SetAttr = setAttr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#attr-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    /// ` _attr: QQuick3DGeometry__Attribute `
    ///
    pub fn setAttr(self: QQuick3DGeometry__TargetAttribute, _attr: anytype) void {
        comptime _ = @TypeOf(_attr)._is_QQuick3DGeometry__Attribute;
        qtc.QQuick3DGeometry__TargetAttribute_SetAttr(@ptrCast(self.ptr), @ptrCast(_attr.ptr));
    }

    /// ### DEPRECATED: Use `stride` instead
    ///
    pub const Stride = stride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#stride-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn stride(self: QQuick3DGeometry__TargetAttribute) i32 {
        return qtc.QQuick3DGeometry__TargetAttribute_Stride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStride` instead
    ///
    pub const SetStride = setStride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry-targetattribute.html#stride-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    /// ` _stride: i32 `
    ///
    pub fn setStride(self: QQuick3DGeometry__TargetAttribute, _stride: i32) void {
        qtc.QQuick3DGeometry__TargetAttribute_SetStride(@ptrCast(self.ptr), @bitCast(_stride));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DGeometry__TargetAttribute `
    ///
    pub fn delete(self: QQuick3DGeometry__TargetAttribute) void {
        qtc.QQuick3DGeometry__TargetAttribute_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dgeometry.html#public-types)
pub const enums = struct {
    pub const PrimitiveType = enum {
        pub const Points: i32 = 0;
        pub const LineStrip: i32 = 1;
        pub const Lines: i32 = 2;
        pub const TriangleStrip: i32 = 3;
        pub const TriangleFan: i32 = 4;
        pub const Triangles: i32 = 5;
    };

    pub const Semantic = enum {
        pub const IndexSemantic: i32 = 0;
        pub const PositionSemantic: i32 = 1;
        pub const NormalSemantic: i32 = 2;
        pub const TexCoordSemantic: i32 = 3;
        pub const TangentSemantic: i32 = 4;
        pub const BinormalSemantic: i32 = 5;
        pub const JointSemantic: i32 = 6;
        pub const WeightSemantic: i32 = 7;
        pub const ColorSemantic: i32 = 8;
        pub const TargetPositionSemantic: i32 = 9;
        pub const TargetNormalSemantic: i32 = 10;
        pub const TargetTangentSemantic: i32 = 11;
        pub const TargetBinormalSemantic: i32 = 12;
        pub const TexCoord1Semantic: i32 = 13;
        pub const TexCoord0Semantic: i32 = 3;
    };

    pub const ComponentType = enum {
        pub const U16Type: i32 = 0;
        pub const U32Type: i32 = 1;
        pub const I32Type: i32 = 2;
        pub const F32Type: i32 = 3;
    };
};
