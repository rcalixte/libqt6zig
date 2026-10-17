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
const QValue3DAxisFormatter = @import("libqt6").QValue3DAxisFormatter;
const QVariant = @import("libqt6").QVariant;
const qabstract3daxis_enums = @import("libqabstract3daxis.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html)
pub const QValue3DAxis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QValue3DAxis,

    pub const _is_QValue3DAxis = {};
    pub const _is_QAbstract3DAxis = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QValue3DAxis object in C++ memory
    ///
    pub fn new() QValue3DAxis {
        return .{ .ptr = qtc.QValue3DAxis_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QValue3DAxis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QValue3DAxis {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QValue3DAxis_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn metaObject(self: QValue3DAxis) QMetaObject {
        return .{ .ptr = qtc.QValue3DAxis_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QValue3DAxis, callback: *const fn (QValue3DAxis) callconv(.c) QMetaObject) void {
        qtc.QValue3DAxis_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    pub fn superMetaObject(self: QValue3DAxis) QMetaObject {
        return .{ .ptr = qtc.QValue3DAxis_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QValue3DAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QValue3DAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QValue3DAxis, callback: *const fn (QValue3DAxis, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QValue3DAxis_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QValue3DAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QValue3DAxis_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QValue3DAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QValue3DAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QValue3DAxis, callback: *const fn (QValue3DAxis, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QValue3DAxis_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QValue3DAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QValue3DAxis_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QValue3DAxis_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxis.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSegmentCount` instead
    ///
    pub const SetSegmentCount = setSegmentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setSegmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn setSegmentCount(self: QValue3DAxis, count: i32) void {
        qtc.QValue3DAxis_SetSegmentCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `segmentCount` instead
    ///
    pub const SegmentCount = segmentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn segmentCount(self: QValue3DAxis) i32 {
        return qtc.QValue3DAxis_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubSegmentCount` instead
    ///
    pub const SetSubSegmentCount = setSubSegmentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setSubSegmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn setSubSegmentCount(self: QValue3DAxis, count: i32) void {
        qtc.QValue3DAxis_SetSubSegmentCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `subSegmentCount` instead
    ///
    pub const SubSegmentCount = subSegmentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#subSegmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn subSegmentCount(self: QValue3DAxis) i32 {
        return qtc.QValue3DAxis_SubSegmentCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelFormat` instead
    ///
    pub const SetLabelFormat = setLabelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setLabelFormat(self: QValue3DAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QValue3DAxis_SetLabelFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `labelFormat` instead
    ///
    pub const LabelFormat = labelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#labelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labelFormat(self: QValue3DAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QValue3DAxis_LabelFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxis.labelFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFormatter` instead
    ///
    pub const SetFormatter = setFormatter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setFormatter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _formatter: QValue3DAxisFormatter `
    ///
    pub fn setFormatter(self: QValue3DAxis, _formatter: anytype) void {
        comptime _ = @TypeOf(_formatter)._is_QValue3DAxisFormatter;
        qtc.QValue3DAxis_SetFormatter(@ptrCast(self.ptr), @ptrCast(_formatter.ptr));
    }

    /// ### DEPRECATED: Use `formatter` instead
    ///
    pub const Formatter = formatter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#formatter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn formatter(self: QValue3DAxis) QValue3DAxisFormatter {
        return .{ .ptr = qtc.QValue3DAxis_Formatter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setReversed` instead
    ///
    pub const SetReversed = setReversed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#setReversed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` enable: bool `
    ///
    pub fn setReversed(self: QValue3DAxis, enable: bool) void {
        qtc.QValue3DAxis_SetReversed(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `reversed` instead
    ///
    pub const Reversed = reversed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#reversed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn reversed(self: QValue3DAxis) bool {
        return qtc.QValue3DAxis_Reversed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `segmentCountChanged` instead
    ///
    pub const SegmentCountChanged = segmentCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#segmentCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn segmentCountChanged(self: QValue3DAxis, count: i32) void {
        qtc.QValue3DAxis_SegmentCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onSegmentCountChanged` instead
    ///
    pub const OnSegmentCountChanged = onSegmentCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#segmentCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, count: i32) callconv(.c) void `
    ///
    pub fn onSegmentCountChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, i32) callconv(.c) void) void {
        qtc.QValue3DAxis_Connect_SegmentCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `subSegmentCountChanged` instead
    ///
    pub const SubSegmentCountChanged = subSegmentCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#subSegmentCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn subSegmentCountChanged(self: QValue3DAxis, count: i32) void {
        qtc.QValue3DAxis_SubSegmentCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onSubSegmentCountChanged` instead
    ///
    pub const OnSubSegmentCountChanged = onSubSegmentCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#subSegmentCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, count: i32) callconv(.c) void `
    ///
    pub fn onSubSegmentCountChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, i32) callconv(.c) void) void {
        qtc.QValue3DAxis_Connect_SubSegmentCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelFormatChanged` instead
    ///
    pub const LabelFormatChanged = labelFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#labelFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn labelFormatChanged(self: QValue3DAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QValue3DAxis_LabelFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onLabelFormatChanged` instead
    ///
    pub const OnLabelFormatChanged = onLabelFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#labelFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLabelFormatChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QValue3DAxis_Connect_LabelFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `formatterChanged` instead
    ///
    pub const FormatterChanged = formatterChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#formatterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _formatter: QValue3DAxisFormatter `
    ///
    pub fn formatterChanged(self: QValue3DAxis, _formatter: anytype) void {
        comptime _ = @TypeOf(_formatter)._is_QValue3DAxisFormatter;
        qtc.QValue3DAxis_FormatterChanged(@ptrCast(self.ptr), @ptrCast(_formatter.ptr));
    }

    /// ### DEPRECATED: Use `onFormatterChanged` instead
    ///
    pub const OnFormatterChanged = onFormatterChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#formatterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, formatter: QValue3DAxisFormatter) callconv(.c) void `
    ///
    pub fn onFormatterChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QValue3DAxisFormatter) callconv(.c) void) void {
        qtc.QValue3DAxis_Connect_FormatterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reversedChanged` instead
    ///
    pub const ReversedChanged = reversedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#reversedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` enable: bool `
    ///
    pub fn reversedChanged(self: QValue3DAxis, enable: bool) void {
        qtc.QValue3DAxis_ReversedChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onReversedChanged` instead
    ///
    pub const OnReversedChanged = onReversedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#reversedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, enable: bool) callconv(.c) void `
    ///
    pub fn onReversedChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, bool) callconv(.c) void) void {
        qtc.QValue3DAxis_Connect_ReversedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QValue3DAxis_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxis.tr2: Memory allocation failed");
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
        var _str = qtc.QValue3DAxis_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxis.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QValue3DAxis, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QAbstract3DAxis_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QValue3DAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DAxis_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxis.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabels` instead
    ///
    pub const SetLabels = setLabels;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _labels: []const []const u8 `
    ///
    pub fn setLabels(self: QValue3DAxis, allocator: std.mem.Allocator, _labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, _labels.len) catch @panic("QValue3DAxis.setLabels: Memory allocation failed");
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

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labels(self: QValue3DAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAbstract3DAxis_Labels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QValue3DAxis.labels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QValue3DAxis.labels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3daxis_enums.AxisOrientation `
    ///
    pub fn orientation(self: QValue3DAxis) i32 {
        return qtc.QAbstract3DAxis_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3daxis_enums.AxisType `
    ///
    pub fn type0(self: QValue3DAxis) i32 {
        return qtc.QAbstract3DAxis_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMin` instead
    ///
    pub const SetMin = setMin;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _min: f32 `
    ///
    pub fn setMin(self: QValue3DAxis, _min: f32) void {
        qtc.QAbstract3DAxis_SetMin(@ptrCast(self.ptr), @bitCast(_min));
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn min(self: QValue3DAxis) f32 {
        return qtc.QAbstract3DAxis_Min(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMax` instead
    ///
    pub const SetMax = setMax;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _max: f32 `
    ///
    pub fn setMax(self: QValue3DAxis, _max: f32) void {
        qtc.QAbstract3DAxis_SetMax(@ptrCast(self.ptr), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn max(self: QValue3DAxis) f32 {
        return qtc.QAbstract3DAxis_Max(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoAdjustRange` instead
    ///
    pub const SetAutoAdjustRange = setAutoAdjustRange;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setAutoAdjustRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` autoAdjust: bool `
    ///
    pub fn setAutoAdjustRange(self: QValue3DAxis, autoAdjust: bool) void {
        qtc.QAbstract3DAxis_SetAutoAdjustRange(@ptrCast(self.ptr), autoAdjust);
    }

    /// ### DEPRECATED: Use `isAutoAdjustRange` instead
    ///
    pub const IsAutoAdjustRange = isAutoAdjustRange;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#isAutoAdjustRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn isAutoAdjustRange(self: QValue3DAxis) bool {
        return qtc.QAbstract3DAxis_IsAutoAdjustRange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _min: f32 `
    ///
    /// ` _max: f32 `
    ///
    pub fn setRange(self: QValue3DAxis, _min: f32, _max: f32) void {
        qtc.QAbstract3DAxis_SetRange(@ptrCast(self.ptr), @bitCast(_min), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `setLabelAutoRotation` instead
    ///
    pub const SetLabelAutoRotation = setLabelAutoRotation;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setLabelAutoRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` angle: f32 `
    ///
    pub fn setLabelAutoRotation(self: QValue3DAxis, angle: f32) void {
        qtc.QAbstract3DAxis_SetLabelAutoRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `labelAutoRotation` instead
    ///
    pub const LabelAutoRotation = labelAutoRotation;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelAutoRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn labelAutoRotation(self: QValue3DAxis) f32 {
        return qtc.QAbstract3DAxis_LabelAutoRotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleVisible` instead
    ///
    pub const SetTitleVisible = setTitleVisible;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setTitleVisible(self: QValue3DAxis, visible: bool) void {
        qtc.QAbstract3DAxis_SetTitleVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isTitleVisible` instead
    ///
    pub const IsTitleVisible = isTitleVisible;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn isTitleVisible(self: QValue3DAxis) bool {
        return qtc.QAbstract3DAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleFixed` instead
    ///
    pub const SetTitleFixed = setTitleFixed;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#setTitleFixed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` fixed: bool `
    ///
    pub fn setTitleFixed(self: QValue3DAxis, fixed: bool) void {
        qtc.QAbstract3DAxis_SetTitleFixed(@ptrCast(self.ptr), fixed);
    }

    /// ### DEPRECATED: Use `isTitleFixed` instead
    ///
    pub const IsTitleFixed = isTitleFixed;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#isTitleFixed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn isTitleFixed(self: QValue3DAxis) bool {
        return qtc.QAbstract3DAxis_IsTitleFixed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `titleChanged` instead
    ///
    pub const TitleChanged = titleChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` newTitle: []const u8 `
    ///
    pub fn titleChanged(self: QValue3DAxis, newTitle: []const u8) void {
        const newTitle_str = qtc.libqt_string{
            .len = newTitle.len,
            .data = newTitle.ptr,
        };
        qtc.QAbstract3DAxis_TitleChanged(@ptrCast(self.ptr), newTitle_str);
    }

    /// ### DEPRECATED: Use `onTitleChanged` instead
    ///
    pub const OnTitleChanged = onTitleChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, newTitle: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsChanged` instead
    ///
    pub const LabelsChanged = labelsChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn labelsChanged(self: QValue3DAxis) void {
        qtc.QAbstract3DAxis_LabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsChanged` instead
    ///
    pub const OnLabelsChanged = onLabelsChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis) callconv(.c) void `
    ///
    pub fn onLabelsChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_LabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orientationChanged` instead
    ///
    pub const OrientationChanged = orientationChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#orientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _orientation: qabstract3daxis_enums.AxisOrientation `
    ///
    pub fn orientationChanged(self: QValue3DAxis, _orientation: i32) void {
        qtc.QAbstract3DAxis_OrientationChanged(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `onOrientationChanged` instead
    ///
    pub const OnOrientationChanged = onOrientationChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#orientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, orientation: qabstract3daxis_enums.AxisOrientation) callconv(.c) void `
    ///
    pub fn onOrientationChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, i32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_OrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minChanged` instead
    ///
    pub const MinChanged = minChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` value: f32 `
    ///
    pub fn minChanged(self: QValue3DAxis, value: f32) void {
        qtc.QAbstract3DAxis_MinChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMinChanged` instead
    ///
    pub const OnMinChanged = onMinChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, value: f32) callconv(.c) void `
    ///
    pub fn onMinChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxChanged` instead
    ///
    pub const MaxChanged = maxChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` value: f32 `
    ///
    pub fn maxChanged(self: QValue3DAxis, value: f32) void {
        qtc.QAbstract3DAxis_MaxChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMaxChanged` instead
    ///
    pub const OnMaxChanged = onMaxChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, value: f32) callconv(.c) void `
    ///
    pub fn onMaxChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rangeChanged` instead
    ///
    pub const RangeChanged = rangeChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` _min: f32 `
    ///
    /// ` _max: f32 `
    ///
    pub fn rangeChanged(self: QValue3DAxis, _min: f32, _max: f32) void {
        qtc.QAbstract3DAxis_RangeChanged(@ptrCast(self.ptr), @bitCast(_min), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `onRangeChanged` instead
    ///
    pub const OnRangeChanged = onRangeChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, min: f32, max: f32) callconv(.c) void `
    ///
    pub fn onRangeChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, f32, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoAdjustRangeChanged` instead
    ///
    pub const AutoAdjustRangeChanged = autoAdjustRangeChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#autoAdjustRangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` autoAdjust: bool `
    ///
    pub fn autoAdjustRangeChanged(self: QValue3DAxis, autoAdjust: bool) void {
        qtc.QAbstract3DAxis_AutoAdjustRangeChanged(@ptrCast(self.ptr), autoAdjust);
    }

    /// ### DEPRECATED: Use `onAutoAdjustRangeChanged` instead
    ///
    pub const OnAutoAdjustRangeChanged = onAutoAdjustRangeChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#autoAdjustRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, autoAdjust: bool) callconv(.c) void `
    ///
    pub fn onAutoAdjustRangeChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, bool) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_AutoAdjustRangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelAutoRotationChanged` instead
    ///
    pub const LabelAutoRotationChanged = labelAutoRotationChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelAutoRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` angle: f32 `
    ///
    pub fn labelAutoRotationChanged(self: QValue3DAxis, angle: f32) void {
        qtc.QAbstract3DAxis_LabelAutoRotationChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `onLabelAutoRotationChanged` instead
    ///
    pub const OnLabelAutoRotationChanged = onLabelAutoRotationChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#labelAutoRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, angle: f32) callconv(.c) void `
    ///
    pub fn onLabelAutoRotationChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, f32) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_LabelAutoRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleVisibilityChanged` instead
    ///
    pub const TitleVisibilityChanged = titleVisibilityChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn titleVisibilityChanged(self: QValue3DAxis, visible: bool) void {
        qtc.QAbstract3DAxis_TitleVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onTitleVisibilityChanged` instead
    ///
    pub const OnTitleVisibilityChanged = onTitleVisibilityChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onTitleVisibilityChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, bool) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_TitleVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleFixedChanged` instead
    ///
    pub const TitleFixedChanged = titleFixedChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleFixedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` fixed: bool `
    ///
    pub fn titleFixedChanged(self: QValue3DAxis, fixed: bool) void {
        qtc.QAbstract3DAxis_TitleFixedChanged(@ptrCast(self.ptr), fixed);
    }

    /// ### DEPRECATED: Use `onTitleFixedChanged` instead
    ///
    pub const OnTitleFixedChanged = onTitleFixedChanged;

    /// Inherited from QAbstract3DAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3daxis.html#titleFixedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, fixed: bool) callconv(.c) void `
    ///
    pub fn onTitleFixedChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, bool) callconv(.c) void) void {
        qtc.QAbstract3DAxis_Connect_TitleFixedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QValue3DAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxis.objectName: Memory allocation failed");
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
    /// ` self: QValue3DAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QValue3DAxis, name: []const u8) void {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn isWidgetType(self: QValue3DAxis) bool {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn isWindowType(self: QValue3DAxis) bool {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn isQuickItemType(self: QValue3DAxis) bool {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn signalsBlocked(self: QValue3DAxis) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QValue3DAxis, b: bool) bool {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn thread(self: QValue3DAxis) QThread {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QValue3DAxis, _thread: anytype) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QValue3DAxis, interval: i32) i32 {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QValue3DAxis, time: i64) i32 {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QValue3DAxis, id: i32) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QValue3DAxis, id: i32) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QValue3DAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QValue3DAxis.children: Memory allocation failed");
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QValue3DAxis, _parent: anytype) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QValue3DAxis, filterObj: anytype) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QValue3DAxis, obj: anytype) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QValue3DAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn disconnect3(self: QValue3DAxis) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QValue3DAxis, receiver: anytype) bool {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn dumpObjectTree(self: QValue3DAxis) void {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn dumpObjectInfo(self: QValue3DAxis) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QValue3DAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QValue3DAxis, name: [:0]const u8) QVariant {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QValue3DAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QValue3DAxis.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QValue3DAxis.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QValue3DAxis `
    ///
    pub fn bindingStorage(self: QValue3DAxis) QBindingStorage {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn bindingStorage2(self: QValue3DAxis) QBindingStorage {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn destroyed(self: QValue3DAxis) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QValue3DAxis, callback: *const fn (QValue3DAxis) callconv(.c) void) void {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn parent(self: QValue3DAxis) QObject {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QValue3DAxis, classname: [:0]const u8) bool {
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
    /// ` self: QValue3DAxis `
    ///
    pub fn deleteLater(self: QValue3DAxis) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QValue3DAxis, interval: i32, timerType: i32) i32 {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QValue3DAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QValue3DAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QValue3DAxis, signal: [:0]const u8) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QValue3DAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QValue3DAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QValue3DAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QValue3DAxis, param1: anytype) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QObject) callconv(.c) void) void {
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QValue3DAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxis_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QValue3DAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxis_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QEvent) callconv(.c) bool) void {
        qtc.QValue3DAxis_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QValue3DAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxis_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QValue3DAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxis_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QObject, QEvent) callconv(.c) bool) void {
        qtc.QValue3DAxis_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QValue3DAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QValue3DAxis_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QValue3DAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QValue3DAxis_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QTimerEvent) callconv(.c) void) void {
        qtc.QValue3DAxis_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QValue3DAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QValue3DAxis_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QValue3DAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QValue3DAxis_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QChildEvent) callconv(.c) void) void {
        qtc.QValue3DAxis_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QValue3DAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QValue3DAxis_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QValue3DAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QValue3DAxis_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QEvent) callconv(.c) void) void {
        qtc.QValue3DAxis_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QValue3DAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxis_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QValue3DAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxis_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QValue3DAxis_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QValue3DAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxis_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QValue3DAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxis_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxis`
    ///
    /// ` callback: *const fn (self: QValue3DAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QValue3DAxis, callback: *const fn (QValue3DAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QValue3DAxis_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxis `
    ///
    pub fn sender(self: QValue3DAxis) QObject {
        return .{ .ptr = qtc.QValue3DAxis_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QValue3DAxis `
    ///
    pub fn senderSignalIndex(self: QValue3DAxis) i32 {
        return qtc.QValue3DAxis_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QValue3DAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QValue3DAxis_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QValue3DAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QValue3DAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QValue3DAxis_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxis `
    ///
    /// ` callback: *const fn (self: QValue3DAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QValue3DAxis, callback: *const fn (QValue3DAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxis-qtdatavis.html#dtor.QValue3DAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QValue3DAxis `
    ///
    pub fn delete(self: QValue3DAxis) void {
        qtc.QValue3DAxis_Delete(@ptrCast(self.ptr));
    }
};
