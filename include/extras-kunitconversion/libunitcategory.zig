const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KUnitConversion__Unit = @import("libqt6").KUnitConversion__Unit;
const KUnitConversion__Value = @import("libqt6").KUnitConversion__Value;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const unit_enums = @import("libunit.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html)
pub const KUnitConversion__UnitCategory = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUnitConversion__UnitCategory,

    pub const _is_KUnitConversion__UnitCategory = {};

    /// New constructs a new KUnitConversion::UnitCategory object.
    ///
    pub fn New() KUnitConversion__UnitCategory {
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_new() };
    }

    /// New2 constructs a new KUnitConversion::UnitCategory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUnitConversion__UnitCategory `
    ///
    pub fn New2(other: anytype) KUnitConversion__UnitCategory {
        comptime _ = @TypeOf(other)._is_KUnitConversion__UnitCategory;
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` other: KUnitConversion__UnitCategory `
    ///
    pub fn OperatorAssign(self: KUnitConversion__UnitCategory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KUnitConversion__UnitCategory;
        qtc.KUnitConversion__UnitCategory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` other: KUnitConversion__UnitCategory `
    ///
    pub fn OperatorEqual(self: KUnitConversion__UnitCategory, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__UnitCategory;
        return qtc.KUnitConversion__UnitCategory_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` other: KUnitConversion__UnitCategory `
    ///
    pub fn OperatorNotEqual(self: KUnitConversion__UnitCategory, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KUnitConversion__UnitCategory;
        return qtc.KUnitConversion__UnitCategory_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    pub fn IsNull(self: KUnitConversion__UnitCategory) bool {
        return qtc.KUnitConversion__UnitCategory_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ## Returns:
    ///
    /// ` unit_enums.CategoryId `
    ///
    pub fn Id(self: KUnitConversion__UnitCategory) i32 {
        return qtc.KUnitConversion__UnitCategory_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KUnitConversion__UnitCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__UnitCategory_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unitcategory.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KUnitConversion__UnitCategory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUnitConversion__UnitCategory_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__unitcategory.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#defaultUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    pub fn DefaultUnit(self: KUnitConversion__UnitCategory) KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_DefaultUnit(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#hasUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` unit: []const u8 `
    ///
    pub fn HasUnit(self: KUnitConversion__UnitCategory, unit: []const u8) bool {
        const unit_str = qtc.libqt_string{
            .len = unit.len,
            .data = unit.ptr,
        };
        return qtc.KUnitConversion__UnitCategory_HasUnit(@ptrCast(self.ptr), unit_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` s: []const u8 `
    ///
    pub fn Unit(self: KUnitConversion__UnitCategory, s: []const u8) KUnitConversion__Unit {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_Unit(@ptrCast(self.ptr), s_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#unit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` unitId: unit_enums.UnitId `
    ///
    pub fn Unit2(self: KUnitConversion__UnitCategory, unitId: i32) KUnitConversion__Unit {
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_Unit2(@ptrCast(self.ptr), @bitCast(unitId)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#units)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Units(self: KUnitConversion__UnitCategory, allocator: std.mem.Allocator) []KUnitConversion__Unit {
        const _arr: qtc.libqt_list = qtc.KUnitConversion__UnitCategory_Units(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUnitConversion__Unit, _arr.len) catch @panic("kunitconversion__unitcategory.Units: Memory allocation failed");
        const _data: [*]QtC.KUnitConversion__Unit = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#mostCommonUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MostCommonUnits(self: KUnitConversion__UnitCategory, allocator: std.mem.Allocator) []KUnitConversion__Unit {
        const _arr: qtc.libqt_list = qtc.KUnitConversion__UnitCategory_MostCommonUnits(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KUnitConversion__Unit, _arr.len) catch @panic("kunitconversion__unitcategory.MostCommonUnits: Memory allocation failed");
        const _data: [*]QtC.KUnitConversion__Unit = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#allUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllUnits(self: KUnitConversion__UnitCategory, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUnitConversion__UnitCategory_AllUnits(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kunitconversion__unitcategory.AllUnits: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kunitconversion__unitcategory.AllUnits: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    pub fn Convert(self: KUnitConversion__UnitCategory, value: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_Convert(@ptrCast(self.ptr), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    /// ` toUnit: unit_enums.UnitId `
    ///
    pub fn Convert2(self: KUnitConversion__UnitCategory, value: anytype, toUnit: i32) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_Convert2(@ptrCast(self.ptr), @ptrCast(value.ptr), @bitCast(toUnit)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    /// ` toUnit: KUnitConversion__Unit `
    ///
    pub fn Convert3(self: KUnitConversion__UnitCategory, value: anytype, toUnit: anytype) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        comptime _ = @TypeOf(toUnit)._is_KUnitConversion__Unit;
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_Convert3(@ptrCast(self.ptr), @ptrCast(value.ptr), @ptrCast(toUnit.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#hasOnlineConversionTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    pub fn HasOnlineConversionTable(self: KUnitConversion__UnitCategory) bool {
        return qtc.KUnitConversion__UnitCategory_HasOnlineConversionTable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#syncConversionTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    pub fn SyncConversionTable(self: KUnitConversion__UnitCategory) KUnitConversion__UpdateJob {
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_SyncConversionTable(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` value: KUnitConversion__Value `
    ///
    /// ` toUnit: []const u8 `
    ///
    pub fn Convert22(self: KUnitConversion__UnitCategory, value: anytype, toUnit: []const u8) KUnitConversion__Value {
        comptime _ = @TypeOf(value)._is_KUnitConversion__Value;
        const toUnit_str = qtc.libqt_string{
            .len = toUnit.len,
            .data = toUnit.ptr,
        };
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_Convert22(@ptrCast(self.ptr), @ptrCast(value.ptr), toUnit_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-unitcategory.html#syncConversionTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    /// ` updateSkipPeriod: i64 of seconds `
    ///
    pub fn SyncConversionTable1(self: KUnitConversion__UnitCategory, updateSkipPeriod: i64) KUnitConversion__UpdateJob {
        return .{ .ptr = qtc.KUnitConversion__UnitCategory_SyncConversionTable1(@ptrCast(self.ptr), @bitCast(updateSkipPeriod)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUnitConversion__UnitCategory `
    ///
    pub fn Delete(self: KUnitConversion__UnitCategory) void {
        qtc.KUnitConversion__UnitCategory_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html)
pub const KUnitConversion__UpdateJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUnitConversion__UpdateJob,

    pub const _is_KUnitConversion__UpdateJob = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn MetaObject(self: KUnitConversion__UpdateJob) QMetaObject {
        return .{ .ptr = qtc.KUnitConversion__UpdateJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KUnitConversion__UpdateJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KUnitConversion__UpdateJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KUnitConversion__UpdateJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KUnitConversion__UpdateJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__updatejob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn Finished(self: KUnitConversion__UpdateJob) void {
        qtc.KUnitConversion__UpdateJob_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kunitconversion-updatejob.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` callback: *const fn (self: KUnitConversion__UpdateJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: KUnitConversion__UpdateJob, callback: *const fn (KUnitConversion__UpdateJob) callconv(.c) void) void {
        qtc.KUnitConversion__UpdateJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__updatejob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__updatejob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KUnitConversion__UpdateJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KUnitConversion__UpdateJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KUnitConversion__UpdateJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kunitconversion__updatejob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KUnitConversion__UpdateJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn IsWidgetType(self: KUnitConversion__UpdateJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn IsWindowType(self: KUnitConversion__UpdateJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn IsQuickItemType(self: KUnitConversion__UpdateJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn SignalsBlocked(self: KUnitConversion__UpdateJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KUnitConversion__UpdateJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn Thread(self: KUnitConversion__UpdateJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KUnitConversion__UpdateJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KUnitConversion__UpdateJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KUnitConversion__UpdateJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KUnitConversion__UpdateJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KUnitConversion__UpdateJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KUnitConversion__UpdateJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kunitconversion__updatejob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KUnitConversion__UpdateJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KUnitConversion__UpdateJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KUnitConversion__UpdateJob, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KUnitConversion__UpdateJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn Disconnect3(self: KUnitConversion__UpdateJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KUnitConversion__UpdateJob, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn DumpObjectTree(self: KUnitConversion__UpdateJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn DumpObjectInfo(self: KUnitConversion__UpdateJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KUnitConversion__UpdateJob, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KUnitConversion__UpdateJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KUnitConversion__UpdateJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kunitconversion__updatejob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kunitconversion__updatejob.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn BindingStorage(self: KUnitConversion__UpdateJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn BindingStorage2(self: KUnitConversion__UpdateJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn Destroyed(self: KUnitConversion__UpdateJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` callback: *const fn (self: KUnitConversion__UpdateJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KUnitConversion__UpdateJob, callback: *const fn (KUnitConversion__UpdateJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn Parent(self: KUnitConversion__UpdateJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KUnitConversion__UpdateJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn DeleteLater(self: KUnitConversion__UpdateJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KUnitConversion__UpdateJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KUnitConversion__UpdateJob, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KUnitConversion__UpdateJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KUnitConversion__UpdateJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KUnitConversion__UpdateJob, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KUnitConversion__UpdateJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KUnitConversion__UpdateJob, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KUnitConversion__UpdateJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` callback: *const fn (self: KUnitConversion__UpdateJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KUnitConversion__UpdateJob, callback: *const fn (KUnitConversion__UpdateJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    /// ` callback: *const fn (self: KUnitConversion__UpdateJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KUnitConversion__UpdateJob, callback: *const fn (KUnitConversion__UpdateJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUnitConversion__UpdateJob `
    ///
    pub fn Delete(self: KUnitConversion__UpdateJob) void {
        qtc.KUnitConversion__UpdateJob_Delete(@ptrCast(self.ptr));
    }
};
