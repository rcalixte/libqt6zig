const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemDelegate = @import("libqt6").QAbstractItemDelegate;
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qdatawidgetmapper_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html)
pub const QDataWidgetMapper = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDataWidgetMapper,

    pub const _is_QDataWidgetMapper = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDataWidgetMapper object in C++ memory
    ///
    pub fn new() QDataWidgetMapper {
        return .{ .ptr = qtc.QDataWidgetMapper_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDataWidgetMapper object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDataWidgetMapper {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDataWidgetMapper_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn metaObject(self: QDataWidgetMapper) QMetaObject {
        return .{ .ptr = qtc.QDataWidgetMapper_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDataWidgetMapper, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDataWidgetMapper_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn superMetaObject(self: QDataWidgetMapper) QMetaObject {
        return .{ .ptr = qtc.QDataWidgetMapper_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDataWidgetMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDataWidgetMapper_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDataWidgetMapper_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDataWidgetMapper, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDataWidgetMapper_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDataWidgetMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDataWidgetMapper_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDataWidgetMapper_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDataWidgetMapper, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDataWidgetMapper_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDataWidgetMapper.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QDataWidgetMapper, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QDataWidgetMapper_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn model(self: QDataWidgetMapper) QAbstractItemModel {
        return .{ .ptr = qtc.QDataWidgetMapper_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemDelegate` instead
    ///
    pub const SetItemDelegate = setItemDelegate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegate(self: QDataWidgetMapper, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QDataWidgetMapper_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegate` instead
    ///
    pub const ItemDelegate = itemDelegate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn itemDelegate(self: QDataWidgetMapper) QAbstractItemDelegate {
        return .{ .ptr = qtc.QDataWidgetMapper_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRootIndex` instead
    ///
    pub const SetRootIndex = setRootIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setRootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setRootIndex(self: QDataWidgetMapper, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QDataWidgetMapper_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `rootIndex` instead
    ///
    pub const RootIndex = rootIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn rootIndex(self: QDataWidgetMapper) QModelIndex {
        return .{ .ptr = qtc.QDataWidgetMapper_RootIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` aOrientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QDataWidgetMapper, aOrientation: i32) void {
        qtc.QDataWidgetMapper_SetOrientation(@ptrCast(self.ptr), @bitCast(aOrientation));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QDataWidgetMapper) i32 {
        return qtc.QDataWidgetMapper_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubmitPolicy` instead
    ///
    pub const SetSubmitPolicy = setSubmitPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setSubmitPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` policy: qdatawidgetmapper_enums.SubmitPolicy `
    ///
    pub fn setSubmitPolicy(self: QDataWidgetMapper, policy: i32) void {
        qtc.QDataWidgetMapper_SetSubmitPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `submitPolicy` instead
    ///
    pub const SubmitPolicy = submitPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submitPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ## Returns:
    ///
    /// ` qdatawidgetmapper_enums.SubmitPolicy `
    ///
    pub fn submitPolicy(self: QDataWidgetMapper) i32 {
        return qtc.QDataWidgetMapper_SubmitPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addMapping` instead
    ///
    pub const AddMapping = addMapping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` widget: QWidget `
    ///
    /// ` section: i32 `
    ///
    pub fn addMapping(self: QDataWidgetMapper, widget: anytype, section: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDataWidgetMapper_AddMapping(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(section));
    }

    /// ### DEPRECATED: Use `addMapping2` instead
    ///
    pub const AddMapping2 = addMapping2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` widget: QWidget `
    ///
    /// ` section: i32 `
    ///
    /// ` propertyName: []u8 `
    ///
    pub fn addMapping2(self: QDataWidgetMapper, widget: anytype, section: i32, propertyName: []u8) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        qtc.QDataWidgetMapper_AddMapping2(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(section), propertyName_str);
    }

    /// ### DEPRECATED: Use `removeMapping` instead
    ///
    pub const RemoveMapping = removeMapping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#removeMapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` widget: QWidget `
    ///
    pub fn removeMapping(self: QDataWidgetMapper, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDataWidgetMapper_RemoveMapping(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `mappedSection` instead
    ///
    pub const MappedSection = mappedSection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` widget: QWidget `
    ///
    pub fn mappedSection(self: QDataWidgetMapper, widget: anytype) i32 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDataWidgetMapper_MappedSection(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `mappedPropertyName` instead
    ///
    pub const MappedPropertyName = mappedPropertyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedPropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn mappedPropertyName(self: QDataWidgetMapper, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.QDataWidgetMapper_MappedPropertyName(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDataWidgetMapper.mappedPropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mappedWidgetAt` instead
    ///
    pub const MappedWidgetAt = mappedWidgetAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedWidgetAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` section: i32 `
    ///
    pub fn mappedWidgetAt(self: QDataWidgetMapper, section: i32) QWidget {
        return .{ .ptr = qtc.QDataWidgetMapper_MappedWidgetAt(@ptrCast(self.ptr), @bitCast(section)) };
    }

    /// ### DEPRECATED: Use `clearMapping` instead
    ///
    pub const ClearMapping = clearMapping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#clearMapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn clearMapping(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_ClearMapping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn currentIndex(self: QDataWidgetMapper) i32 {
        return qtc.QDataWidgetMapper_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revert` instead
    ///
    pub const Revert = revert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#revert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn revert(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `submit` instead
    ///
    pub const Submit = submit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn submit(self: QDataWidgetMapper) bool {
        return qtc.QDataWidgetMapper_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toFirst` instead
    ///
    pub const ToFirst = toFirst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn toFirst(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_ToFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toLast` instead
    ///
    pub const ToLast = toLast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn toLast(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_ToLast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toNext` instead
    ///
    pub const ToNext = toNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn toNext(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_ToNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPrevious` instead
    ///
    pub const ToPrevious = toPrevious;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toPrevious)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn toPrevious(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_ToPrevious(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentIndex` instead
    ///
    pub const SetCurrentIndex = setCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` index: i32 `
    ///
    pub fn setCurrentIndex(self: QDataWidgetMapper, index: i32) void {
        qtc.QDataWidgetMapper_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSetCurrentIndex` instead
    ///
    pub const OnSetCurrentIndex = onSetCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, index: i32) callconv(.c) void `
    ///
    pub fn onSetCurrentIndex(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, i32) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnSetCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCurrentIndex` instead
    ///
    pub const SuperSetCurrentIndex = superSetCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` index: i32 `
    ///
    pub fn superSetCurrentIndex(self: QDataWidgetMapper, index: i32) void {
        qtc.QDataWidgetMapper_SuperSetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setCurrentModelIndex` instead
    ///
    pub const SetCurrentModelIndex = setCurrentModelIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentModelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setCurrentModelIndex(self: QDataWidgetMapper, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QDataWidgetMapper_SetCurrentModelIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `currentIndexChanged` instead
    ///
    pub const CurrentIndexChanged = currentIndexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` index: i32 `
    ///
    pub fn currentIndexChanged(self: QDataWidgetMapper, index: i32) void {
        qtc.QDataWidgetMapper_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onCurrentIndexChanged` instead
    ///
    pub const OnCurrentIndexChanged = onCurrentIndexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, index: i32) callconv(.c) void `
    ///
    pub fn onCurrentIndexChanged(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, i32) callconv(.c) void) void {
        qtc.QDataWidgetMapper_Connect_CurrentIndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDataWidgetMapper.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDataWidgetMapper.tr3: Memory allocation failed");
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDataWidgetMapper, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDataWidgetMapper.objectName: Memory allocation failed");
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDataWidgetMapper, name: []const u8) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn isWidgetType(self: QDataWidgetMapper) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn isWindowType(self: QDataWidgetMapper) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn isQuickItemType(self: QDataWidgetMapper) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn signalsBlocked(self: QDataWidgetMapper) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDataWidgetMapper, b: bool) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn thread(self: QDataWidgetMapper) QThread {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDataWidgetMapper, _thread: anytype) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDataWidgetMapper, interval: i32) i32 {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDataWidgetMapper, time: i64) i32 {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDataWidgetMapper, id: i32) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDataWidgetMapper, id: i32) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDataWidgetMapper, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDataWidgetMapper.children: Memory allocation failed");
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDataWidgetMapper, _parent: anytype) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDataWidgetMapper, filterObj: anytype) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDataWidgetMapper, obj: anytype) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDataWidgetMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn disconnect3(self: QDataWidgetMapper) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDataWidgetMapper, receiver: anytype) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn dumpObjectTree(self: QDataWidgetMapper) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn dumpObjectInfo(self: QDataWidgetMapper) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDataWidgetMapper, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDataWidgetMapper, name: [:0]const u8) QVariant {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDataWidgetMapper, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDataWidgetMapper.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDataWidgetMapper.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn bindingStorage(self: QDataWidgetMapper) QBindingStorage {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn bindingStorage2(self: QDataWidgetMapper) QBindingStorage {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn destroyed(self: QDataWidgetMapper) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper) callconv(.c) void) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn parent(self: QDataWidgetMapper) QObject {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDataWidgetMapper, classname: [:0]const u8) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn deleteLater(self: QDataWidgetMapper) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDataWidgetMapper, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDataWidgetMapper, time: i64, timerType: i32) i32 {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDataWidgetMapper, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDataWidgetMapper, signal: [:0]const u8) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDataWidgetMapper, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDataWidgetMapper, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDataWidgetMapper, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDataWidgetMapper, param1: anytype) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QObject) callconv(.c) void) void {
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDataWidgetMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDataWidgetMapper_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDataWidgetMapper, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDataWidgetMapper_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QEvent) callconv(.c) bool) void {
        qtc.QDataWidgetMapper_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDataWidgetMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDataWidgetMapper_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDataWidgetMapper, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDataWidgetMapper_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDataWidgetMapper_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDataWidgetMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDataWidgetMapper_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDataWidgetMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDataWidgetMapper_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QTimerEvent) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDataWidgetMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDataWidgetMapper_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDataWidgetMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDataWidgetMapper_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QChildEvent) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDataWidgetMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDataWidgetMapper_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDataWidgetMapper, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDataWidgetMapper_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QEvent) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDataWidgetMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDataWidgetMapper_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDataWidgetMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDataWidgetMapper_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDataWidgetMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDataWidgetMapper_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDataWidgetMapper, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDataWidgetMapper_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QMetaMethod) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn sender(self: QDataWidgetMapper) QObject {
        return .{ .ptr = qtc.QDataWidgetMapper_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn superSender(self: QDataWidgetMapper) QObject {
        return .{ .ptr = qtc.QDataWidgetMapper_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDataWidgetMapper, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDataWidgetMapper_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn senderSignalIndex(self: QDataWidgetMapper) i32 {
        return qtc.QDataWidgetMapper_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    pub fn superSenderSignalIndex(self: QDataWidgetMapper) i32 {
        return qtc.QDataWidgetMapper_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDataWidgetMapper, callback: *const fn () callconv(.c) i32) void {
        qtc.QDataWidgetMapper_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDataWidgetMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDataWidgetMapper_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDataWidgetMapper, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDataWidgetMapper_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDataWidgetMapper_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDataWidgetMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDataWidgetMapper_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDataWidgetMapper, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDataWidgetMapper_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDataWidgetMapper`
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, QMetaMethod) callconv(.c) bool) void {
        qtc.QDataWidgetMapper_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDataWidgetMapper `
    ///
    /// ` callback: *const fn (self: QDataWidgetMapper, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDataWidgetMapper, callback: *const fn (QDataWidgetMapper, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#dtor.QDataWidgetMapper)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDataWidgetMapper `
    ///
    pub fn delete(self: QDataWidgetMapper) void {
        qtc.QDataWidgetMapper_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatawidgetmapper.html#public-types)
pub const enums = struct {
    pub const SubmitPolicy = enum(i32) {
        pub const AutoSubmit: i32 = 0;
        pub const ManualSubmit: i32 = 1;
    };
};
