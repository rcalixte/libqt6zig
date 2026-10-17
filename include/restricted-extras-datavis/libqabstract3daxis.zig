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
const qabstract3daxis_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html)
pub const QAbstract3DAxis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstract3DAxis,

    pub const _is_QAbstract3DAxis = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn metaObject(self: QAbstract3DAxis) QMetaObject {
        return .{ .ptr = qtc.QAbstract3DAxis_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstract3DAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstract3DAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAbstract3DAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstract3DAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QAbstract3DAxis_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DAxis.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QAbstract3DAxis, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QAbstract3DAxis_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QAbstract3DAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DAxis_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DAxis.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabels` instead
    ///
    pub const SetLabels = setLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _labels: []const []const u8 `
    ///
    pub fn setLabels(self: QAbstract3DAxis, allocator: std.mem.Allocator, _labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, _labels.len) catch @panic("QAbstract3DAxis.setLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (_labels, 0.._labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = _labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QAbstract3DAxis_SetLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `labels` instead
    ///
    pub const Labels = labels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labels(self: QAbstract3DAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAbstract3DAxis_Labels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstract3DAxis.labels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstract3DAxis.labels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3daxis_enums.AxisOrientation `
    ///
    pub fn orientation(self: QAbstract3DAxis) i32 {
        return qtc.QAbstract3DAxis_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3daxis_enums.AxisType `
    ///
    pub fn type0(self: QAbstract3DAxis) i32 {
        return qtc.QAbstract3DAxis_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMin` instead
    ///
    pub const SetMin = setMin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _min: f32 `
    ///
    pub fn setMin(self: QAbstract3DAxis, _min: f32) void {
        qtc.QAbstract3DAxis_SetMin(@ptrCast(self.ptr), @bitCast(_min));
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn min(self: QAbstract3DAxis) f32 {
        return qtc.QAbstract3DAxis_Min(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMax` instead
    ///
    pub const SetMax = setMax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _max: f32 `
    ///
    pub fn setMax(self: QAbstract3DAxis, _max: f32) void {
        qtc.QAbstract3DAxis_SetMax(@ptrCast(self.ptr), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn max(self: QAbstract3DAxis) f32 {
        return qtc.QAbstract3DAxis_Max(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoAdjustRange` instead
    ///
    pub const SetAutoAdjustRange = setAutoAdjustRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setAutoAdjustRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` autoAdjust: bool `
    ///
    pub fn setAutoAdjustRange(self: QAbstract3DAxis, autoAdjust: bool) void {
        qtc.QAbstract3DAxis_SetAutoAdjustRange(@ptrCast(self.ptr), autoAdjust);
    }

    /// ### DEPRECATED: Use `isAutoAdjustRange` instead
    ///
    pub const IsAutoAdjustRange = isAutoAdjustRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#isAutoAdjustRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn isAutoAdjustRange(self: QAbstract3DAxis) bool {
        return qtc.QAbstract3DAxis_IsAutoAdjustRange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _min: f32 `
    ///
    /// ` _max: f32 `
    ///
    pub fn setRange(self: QAbstract3DAxis, _min: f32, _max: f32) void {
        qtc.QAbstract3DAxis_SetRange(@ptrCast(self.ptr), @bitCast(_min), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `setLabelAutoRotation` instead
    ///
    pub const SetLabelAutoRotation = setLabelAutoRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setLabelAutoRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` angle: f32 `
    ///
    pub fn setLabelAutoRotation(self: QAbstract3DAxis, angle: f32) void {
        qtc.QAbstract3DAxis_SetLabelAutoRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `labelAutoRotation` instead
    ///
    pub const LabelAutoRotation = labelAutoRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelAutoRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn labelAutoRotation(self: QAbstract3DAxis) f32 {
        return qtc.QAbstract3DAxis_LabelAutoRotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleVisible` instead
    ///
    pub const SetTitleVisible = setTitleVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setTitleVisible(self: QAbstract3DAxis, visible: bool) void {
        qtc.QAbstract3DAxis_SetTitleVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isTitleVisible` instead
    ///
    pub const IsTitleVisible = isTitleVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn isTitleVisible(self: QAbstract3DAxis) bool {
        return qtc.QAbstract3DAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleFixed` instead
    ///
    pub const SetTitleFixed = setTitleFixed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#setTitleFixed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` fixed: bool `
    ///
    pub fn setTitleFixed(self: QAbstract3DAxis, fixed: bool) void {
        qtc.QAbstract3DAxis_SetTitleFixed(@ptrCast(self.ptr), fixed);
    }

    /// ### DEPRECATED: Use `isTitleFixed` instead
    ///
    pub const IsTitleFixed = isTitleFixed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#isTitleFixed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn isTitleFixed(self: QAbstract3DAxis) bool {
        return qtc.QAbstract3DAxis_IsTitleFixed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `titleChanged` instead
    ///
    pub const TitleChanged = titleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` newTitle: []const u8 `
    ///
    pub fn titleChanged(self: QAbstract3DAxis, newTitle: []const u8) void {
        const newTitle_str = qtc.libqt_string{
            .len = newTitle.len,
            .data = newTitle.ptr,
        };
        qtc.QAbstract3DAxis_TitleChanged(@ptrCast(self.ptr), newTitle_str);
    }

    /// ### DEPRECATED: Use `onTitleChanged` instead
    ///
    pub const OnTitleChanged = onTitleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, newTitle: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsChanged` instead
    ///
    pub const LabelsChanged = labelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn labelsChanged(self: QAbstract3DAxis) void {
        qtc.QAbstract3DAxis_LabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsChanged` instead
    ///
    pub const OnLabelsChanged = onLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis) callconv(.c) void `
    ///
    pub fn onLabelsChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_LabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orientationChanged` instead
    ///
    pub const OrientationChanged = orientationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#orientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _orientation: qabstract3daxis_enums.AxisOrientation `
    ///
    pub fn orientationChanged(self: QAbstract3DAxis, _orientation: i32) void {
        qtc.QAbstract3DAxis_OrientationChanged(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `onOrientationChanged` instead
    ///
    pub const OnOrientationChanged = onOrientationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#orientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, orientation: qabstract3daxis_enums.AxisOrientation) callconv(.c) void `
    ///
    pub fn onOrientationChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, i32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_OrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minChanged` instead
    ///
    pub const MinChanged = minChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` value: f32 `
    ///
    pub fn minChanged(self: QAbstract3DAxis, value: f32) void {
        qtc.QAbstract3DAxis_MinChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMinChanged` instead
    ///
    pub const OnMinChanged = onMinChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, value: f32) callconv(.c) void `
    ///
    pub fn onMinChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxChanged` instead
    ///
    pub const MaxChanged = maxChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` value: f32 `
    ///
    pub fn maxChanged(self: QAbstract3DAxis, value: f32) void {
        qtc.QAbstract3DAxis_MaxChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMaxChanged` instead
    ///
    pub const OnMaxChanged = onMaxChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, value: f32) callconv(.c) void `
    ///
    pub fn onMaxChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rangeChanged` instead
    ///
    pub const RangeChanged = rangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _min: f32 `
    ///
    /// ` _max: f32 `
    ///
    pub fn rangeChanged(self: QAbstract3DAxis, _min: f32, _max: f32) void {
        qtc.QAbstract3DAxis_RangeChanged(@ptrCast(self.ptr), @bitCast(_min), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `onRangeChanged` instead
    ///
    pub const OnRangeChanged = onRangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, min: f32, max: f32) callconv(.c) void `
    ///
    pub fn onRangeChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, f32, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoAdjustRangeChanged` instead
    ///
    pub const AutoAdjustRangeChanged = autoAdjustRangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#autoAdjustRangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` autoAdjust: bool `
    ///
    pub fn autoAdjustRangeChanged(self: QAbstract3DAxis, autoAdjust: bool) void {
        qtc.QAbstract3DAxis_AutoAdjustRangeChanged(@ptrCast(self.ptr), autoAdjust);
    }

    /// ### DEPRECATED: Use `onAutoAdjustRangeChanged` instead
    ///
    pub const OnAutoAdjustRangeChanged = onAutoAdjustRangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#autoAdjustRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, autoAdjust: bool) callconv(.c) void `
    ///
    pub fn onAutoAdjustRangeChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, bool) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_AutoAdjustRangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelAutoRotationChanged` instead
    ///
    pub const LabelAutoRotationChanged = labelAutoRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelAutoRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` angle: f32 `
    ///
    pub fn labelAutoRotationChanged(self: QAbstract3DAxis, angle: f32) void {
        qtc.QAbstract3DAxis_LabelAutoRotationChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `onLabelAutoRotationChanged` instead
    ///
    pub const OnLabelAutoRotationChanged = onLabelAutoRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#labelAutoRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, angle: f32) callconv(.c) void `
    ///
    pub fn onLabelAutoRotationChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_LabelAutoRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleVisibilityChanged` instead
    ///
    pub const TitleVisibilityChanged = titleVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn titleVisibilityChanged(self: QAbstract3DAxis, visible: bool) void {
        qtc.QAbstract3DAxis_TitleVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onTitleVisibilityChanged` instead
    ///
    pub const OnTitleVisibilityChanged = onTitleVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onTitleVisibilityChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, bool) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_TitleVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleFixedChanged` instead
    ///
    pub const TitleFixedChanged = titleFixedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleFixedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` fixed: bool `
    ///
    pub fn titleFixedChanged(self: QAbstract3DAxis, fixed: bool) void {
        qtc.QAbstract3DAxis_TitleFixedChanged(@ptrCast(self.ptr), fixed);
    }

    /// ### DEPRECATED: Use `onTitleFixedChanged` instead
    ///
    pub const OnTitleFixedChanged = onTitleFixedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#titleFixedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, fixed: bool) callconv(.c) void `
    ///
    pub fn onTitleFixedChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, bool) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_TitleFixedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QAbstract3DAxis_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DAxis.tr2: Memory allocation failed");
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
        var _str = qtc.QAbstract3DAxis_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DAxis.tr3: Memory allocation failed");
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstract3DAxis, _event: anytype) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstract3DAxis, watched: anytype, _event: anytype) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstract3DAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DAxis.objectName: Memory allocation failed");
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstract3DAxis, name: []const u8) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn isWidgetType(self: QAbstract3DAxis) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn isWindowType(self: QAbstract3DAxis) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn isQuickItemType(self: QAbstract3DAxis) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn signalsBlocked(self: QAbstract3DAxis) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstract3DAxis, b: bool) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn thread(self: QAbstract3DAxis) QThread {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstract3DAxis, _thread: anytype) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstract3DAxis, interval: i32) i32 {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstract3DAxis, time: i64) i32 {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstract3DAxis, id: i32) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstract3DAxis, id: i32) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstract3DAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstract3DAxis.children: Memory allocation failed");
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstract3DAxis, _parent: anytype) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstract3DAxis, filterObj: anytype) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstract3DAxis, obj: anytype) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstract3DAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn disconnect3(self: QAbstract3DAxis) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstract3DAxis, receiver: anytype) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn dumpObjectTree(self: QAbstract3DAxis) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn dumpObjectInfo(self: QAbstract3DAxis) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstract3DAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstract3DAxis, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstract3DAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstract3DAxis.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstract3DAxis.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn bindingStorage(self: QAbstract3DAxis) QBindingStorage {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn bindingStorage2(self: QAbstract3DAxis) QBindingStorage {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn destroyed(self: QAbstract3DAxis) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis) callconv(.c) void) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn parent(self: QAbstract3DAxis) QObject {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstract3DAxis, classname: [:0]const u8) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    pub fn deleteLater(self: QAbstract3DAxis) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstract3DAxis, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstract3DAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstract3DAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstract3DAxis, signal: [:0]const u8) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstract3DAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstract3DAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstract3DAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstract3DAxis, param1: anytype) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstract3DAxis `
    ///
    /// ` callback: *const fn (self: QAbstract3DAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstract3DAxis, callback: *const fn (QAbstract3DAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#dtor.QAbstract3DAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstract3DAxis `
    ///
    pub fn delete(self: QAbstract3DAxis) void {
        qtc.QAbstract3DAxis_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis-qtdatavis.html#public-types)
pub const enums = struct {
    pub const AxisOrientation = enum {
        pub const AxisOrientationNone: i32 = 0;
        pub const AxisOrientationX: i32 = 1;
        pub const AxisOrientationY: i32 = 2;
        pub const AxisOrientationZ: i32 = 4;
    };

    pub const AxisType = enum {
        pub const AxisTypeNone: i32 = 0;
        pub const AxisTypeCategory: i32 = 1;
        pub const AxisTypeValue: i32 = 2;
    };
};
