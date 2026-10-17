const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QValue3DAxis = @import("libqt6").QValue3DAxis;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html)
pub const QValue3DAxisFormatter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QValue3DAxisFormatter,

    pub const _is_QValue3DAxisFormatter = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QValue3DAxisFormatter object in C++ memory
    ///
    pub fn new() QValue3DAxisFormatter {
        return .{ .ptr = qtc.QValue3DAxisFormatter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QValue3DAxisFormatter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QValue3DAxisFormatter {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QValue3DAxisFormatter_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn metaObject(self: QValue3DAxisFormatter) QMetaObject {
        return .{ .ptr = qtc.QValue3DAxisFormatter_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter) callconv(.c) QMetaObject) void {
        qtc.QValue3DAxisFormatter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn superMetaObject(self: QValue3DAxisFormatter) QMetaObject {
        return .{ .ptr = qtc.QValue3DAxisFormatter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QValue3DAxisFormatter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QValue3DAxisFormatter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QValue3DAxisFormatter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QValue3DAxisFormatter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QValue3DAxisFormatter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QValue3DAxisFormatter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QValue3DAxisFormatter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QValue3DAxisFormatter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QValue3DAxisFormatter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QValue3DAxisFormatter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QValue3DAxisFormatter_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxisFormatter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAllowNegatives` instead
    ///
    pub const SetAllowNegatives = setAllowNegatives;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#setAllowNegatives)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allow: bool `
    ///
    pub fn setAllowNegatives(self: QValue3DAxisFormatter, allow: bool) void {
        qtc.QValue3DAxisFormatter_SetAllowNegatives(@ptrCast(self.ptr), allow);
    }

    /// ### DEPRECATED: Use `allowNegatives` instead
    ///
    pub const AllowNegatives = allowNegatives;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#allowNegatives)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn allowNegatives(self: QValue3DAxisFormatter) bool {
        return qtc.QValue3DAxisFormatter_AllowNegatives(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAllowZero` instead
    ///
    pub const SetAllowZero = setAllowZero;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#setAllowZero)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allow: bool `
    ///
    pub fn setAllowZero(self: QValue3DAxisFormatter, allow: bool) void {
        qtc.QValue3DAxisFormatter_SetAllowZero(@ptrCast(self.ptr), allow);
    }

    /// ### DEPRECATED: Use `allowZero` instead
    ///
    pub const AllowZero = allowZero;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#allowZero)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn allowZero(self: QValue3DAxisFormatter) bool {
        return qtc.QValue3DAxisFormatter_AllowZero(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createNewInstance` instead
    ///
    pub const CreateNewInstance = createNewInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#createNewInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn createNewInstance(self: QValue3DAxisFormatter) QValue3DAxisFormatter {
        return .{ .ptr = qtc.QValue3DAxisFormatter_CreateNewInstance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateNewInstance` instead
    ///
    pub const OnCreateNewInstance = onCreateNewInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#createNewInstance)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter) callconv(.c) QValue3DAxisFormatter `
    ///
    pub fn onCreateNewInstance(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter) callconv(.c) QValue3DAxisFormatter) void {
        qtc.QValue3DAxisFormatter_OnCreateNewInstance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateNewInstance` instead
    ///
    pub const SuperCreateNewInstance = superCreateNewInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#createNewInstance)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn superCreateNewInstance(self: QValue3DAxisFormatter) QValue3DAxisFormatter {
        return .{ .ptr = qtc.QValue3DAxisFormatter_SuperCreateNewInstance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `recalculate` instead
    ///
    pub const Recalculate = recalculate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#recalculate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn recalculate(self: QValue3DAxisFormatter) void {
        qtc.QValue3DAxisFormatter_Recalculate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRecalculate` instead
    ///
    pub const OnRecalculate = onRecalculate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#recalculate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter) callconv(.c) void `
    ///
    pub fn onRecalculate(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnRecalculate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRecalculate` instead
    ///
    pub const SuperRecalculate = superRecalculate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#recalculate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn superRecalculate(self: QValue3DAxisFormatter) void {
        qtc.QValue3DAxisFormatter_SuperRecalculate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stringForValue` instead
    ///
    pub const StringForValue = stringForValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#stringForValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn stringForValue(self: QValue3DAxisFormatter, allocator: std.mem.Allocator, value: f64, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QValue3DAxisFormatter_StringForValue(@ptrCast(self.ptr), @bitCast(value), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxisFormatter.stringForValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onStringForValue` instead
    ///
    pub const OnStringForValue = onStringForValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#stringForValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, value: f64, format: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onStringForValue(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, f64, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QValue3DAxisFormatter_OnStringForValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStringForValue` instead
    ///
    pub const SuperStringForValue = superStringForValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#stringForValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` value: f64 `
    ///
    /// ` format: []const u8 `
    ///
    pub fn superStringForValue(self: QValue3DAxisFormatter, allocator: std.mem.Allocator, value: f64, format: []const u8) []const u8 {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        var _str = qtc.QValue3DAxisFormatter_SuperStringForValue(@ptrCast(self.ptr), @bitCast(value), format_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxisFormatter.stringForValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `positionAt` instead
    ///
    pub const PositionAt = positionAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#positionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` value: f32 `
    ///
    pub fn positionAt(self: QValue3DAxisFormatter, value: f32) f32 {
        return qtc.QValue3DAxisFormatter_PositionAt(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onPositionAt` instead
    ///
    pub const OnPositionAt = onPositionAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#positionAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, value: f32) callconv(.c) f32 `
    ///
    pub fn onPositionAt(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, f32) callconv(.c) f32) void {
        qtc.QValue3DAxisFormatter_OnPositionAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPositionAt` instead
    ///
    pub const SuperPositionAt = superPositionAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#positionAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` value: f32 `
    ///
    pub fn superPositionAt(self: QValue3DAxisFormatter, value: f32) f32 {
        return qtc.QValue3DAxisFormatter_SuperPositionAt(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `valueAt` instead
    ///
    pub const ValueAt = valueAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#valueAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` position: f32 `
    ///
    pub fn valueAt(self: QValue3DAxisFormatter, position: f32) f32 {
        return qtc.QValue3DAxisFormatter_ValueAt(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `onValueAt` instead
    ///
    pub const OnValueAt = onValueAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#valueAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, position: f32) callconv(.c) f32 `
    ///
    pub fn onValueAt(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, f32) callconv(.c) f32) void {
        qtc.QValue3DAxisFormatter_OnValueAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superValueAt` instead
    ///
    pub const SuperValueAt = superValueAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#valueAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` position: f32 `
    ///
    pub fn superValueAt(self: QValue3DAxisFormatter, position: f32) f32 {
        return qtc.QValue3DAxisFormatter_SuperValueAt(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `populateCopy` instead
    ///
    pub const PopulateCopy = populateCopy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#populateCopy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` copy: QValue3DAxisFormatter `
    ///
    pub fn populateCopy(self: QValue3DAxisFormatter, copy: anytype) void {
        comptime _ = @TypeOf(copy)._is_QValue3DAxisFormatter;
        qtc.QValue3DAxisFormatter_PopulateCopy(@ptrCast(self.ptr), @ptrCast(copy.ptr));
    }

    /// ### DEPRECATED: Use `onPopulateCopy` instead
    ///
    pub const OnPopulateCopy = onPopulateCopy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#populateCopy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, copy: QValue3DAxisFormatter) callconv(.c) void `
    ///
    pub fn onPopulateCopy(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QValue3DAxisFormatter) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnPopulateCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPopulateCopy` instead
    ///
    pub const SuperPopulateCopy = superPopulateCopy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#populateCopy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` copy: QValue3DAxisFormatter `
    ///
    pub fn superPopulateCopy(self: QValue3DAxisFormatter, copy: anytype) void {
        comptime _ = @TypeOf(copy)._is_QValue3DAxisFormatter;
        qtc.QValue3DAxisFormatter_SuperPopulateCopy(@ptrCast(self.ptr), @ptrCast(copy.ptr));
    }

    /// ### DEPRECATED: Use `markDirty` instead
    ///
    pub const MarkDirty = markDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#markDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn markDirty(self: QValue3DAxisFormatter) void {
        qtc.QValue3DAxisFormatter_MarkDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `axis` instead
    ///
    pub const Axis = axis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#axis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn axis(self: QValue3DAxisFormatter) QValue3DAxis {
        return .{ .ptr = qtc.QValue3DAxisFormatter_Axis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `gridPositions` instead
    ///
    pub const GridPositions = gridPositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#gridPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn gridPositions(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QValue3DAxisFormatter_GridPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("QValue3DAxisFormatter.gridPositions: Memory allocation failed");
        const _data_val: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subGridPositions` instead
    ///
    pub const SubGridPositions = subGridPositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#subGridPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subGridPositions(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QValue3DAxisFormatter_SubGridPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("QValue3DAxisFormatter.subGridPositions: Memory allocation failed");
        const _data_val: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `labelPositions` instead
    ///
    pub const LabelPositions = labelPositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#labelPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labelPositions(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QValue3DAxisFormatter_LabelPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("QValue3DAxisFormatter.labelPositions: Memory allocation failed");
        const _data_val: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `labelStrings` instead
    ///
    pub const LabelStrings = labelStrings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#labelStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labelStrings(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QValue3DAxisFormatter_LabelStrings(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QValue3DAxisFormatter.labelStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QValue3DAxisFormatter.labelStrings: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QValue3DAxisFormatter, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QValue3DAxisFormatter_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn locale(self: QValue3DAxisFormatter) QLocale {
        return .{ .ptr = qtc.QValue3DAxisFormatter_Locale(@ptrCast(self.ptr)) };
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
        var _str = qtc.QValue3DAxisFormatter_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxisFormatter.tr2: Memory allocation failed");
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
        var _str = qtc.QValue3DAxisFormatter_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxisFormatter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `markDirty1` instead
    ///
    pub const MarkDirty1 = markDirty1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#markDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` labelsChange: bool `
    ///
    pub fn markDirty1(self: QValue3DAxisFormatter, labelsChange: bool) void {
        qtc.QValue3DAxisFormatter_MarkDirty1(@ptrCast(self.ptr), labelsChange);
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QValue3DAxisFormatter.objectName: Memory allocation failed");
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QValue3DAxisFormatter, name: []const u8) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn isWidgetType(self: QValue3DAxisFormatter) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn isWindowType(self: QValue3DAxisFormatter) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn isQuickItemType(self: QValue3DAxisFormatter) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn signalsBlocked(self: QValue3DAxisFormatter) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QValue3DAxisFormatter, b: bool) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn thread(self: QValue3DAxisFormatter) QThread {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QValue3DAxisFormatter, _thread: anytype) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QValue3DAxisFormatter, interval: i32) i32 {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QValue3DAxisFormatter, time: i64) i32 {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QValue3DAxisFormatter, id: i32) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QValue3DAxisFormatter, id: i32) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QValue3DAxisFormatter.children: Memory allocation failed");
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QValue3DAxisFormatter, _parent: anytype) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QValue3DAxisFormatter, filterObj: anytype) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QValue3DAxisFormatter, obj: anytype) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QValue3DAxisFormatter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn disconnect3(self: QValue3DAxisFormatter) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QValue3DAxisFormatter, receiver: anytype) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn dumpObjectTree(self: QValue3DAxisFormatter) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn dumpObjectInfo(self: QValue3DAxisFormatter) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QValue3DAxisFormatter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QValue3DAxisFormatter, name: [:0]const u8) QVariant {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QValue3DAxisFormatter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QValue3DAxisFormatter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QValue3DAxisFormatter.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn bindingStorage(self: QValue3DAxisFormatter) QBindingStorage {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn bindingStorage2(self: QValue3DAxisFormatter) QBindingStorage {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn destroyed(self: QValue3DAxisFormatter) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter) callconv(.c) void) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn parent(self: QValue3DAxisFormatter) QObject {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QValue3DAxisFormatter, classname: [:0]const u8) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn deleteLater(self: QValue3DAxisFormatter) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QValue3DAxisFormatter, interval: i32, timerType: i32) i32 {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QValue3DAxisFormatter, time: i64, timerType: i32) i32 {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QValue3DAxisFormatter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QValue3DAxisFormatter, signal: [:0]const u8) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QValue3DAxisFormatter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QValue3DAxisFormatter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QValue3DAxisFormatter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QValue3DAxisFormatter, param1: anytype) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QObject) callconv(.c) void) void {
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QValue3DAxisFormatter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxisFormatter_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QValue3DAxisFormatter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxisFormatter_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QEvent) callconv(.c) bool) void {
        qtc.QValue3DAxisFormatter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QValue3DAxisFormatter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxisFormatter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QValue3DAxisFormatter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QValue3DAxisFormatter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QObject, QEvent) callconv(.c) bool) void {
        qtc.QValue3DAxisFormatter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QValue3DAxisFormatter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QValue3DAxisFormatter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QValue3DAxisFormatter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QValue3DAxisFormatter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QTimerEvent) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QValue3DAxisFormatter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QValue3DAxisFormatter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QValue3DAxisFormatter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QValue3DAxisFormatter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QChildEvent) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QValue3DAxisFormatter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QValue3DAxisFormatter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QValue3DAxisFormatter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QValue3DAxisFormatter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QEvent) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QValue3DAxisFormatter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxisFormatter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QValue3DAxisFormatter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxisFormatter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QMetaMethod) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QValue3DAxisFormatter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxisFormatter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QValue3DAxisFormatter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QValue3DAxisFormatter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxisFormatter`
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, QMetaMethod) callconv(.c) void) void {
        qtc.QValue3DAxisFormatter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn sender(self: QValue3DAxisFormatter) QObject {
        return .{ .ptr = qtc.QValue3DAxisFormatter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn senderSignalIndex(self: QValue3DAxisFormatter) i32 {
        return qtc.QValue3DAxisFormatter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QValue3DAxisFormatter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QValue3DAxisFormatter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QValue3DAxisFormatter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QValue3DAxisFormatter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QValue3DAxisFormatter `
    ///
    /// ` callback: *const fn (self: QValue3DAxisFormatter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QValue3DAxisFormatter, callback: *const fn (QValue3DAxisFormatter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalue3daxisformatter-qtdatavis.html#dtor.QValue3DAxisFormatter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QValue3DAxisFormatter `
    ///
    pub fn delete(self: QValue3DAxisFormatter) void {
        qtc.QValue3DAxisFormatter_Delete(@ptrCast(self.ptr));
    }
};
