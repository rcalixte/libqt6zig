const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractaxis_enums = @import("libqabstractaxis.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html)
pub const QBarCategoryAxis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBarCategoryAxis,

    pub const _is_QBarCategoryAxis = {};
    pub const _is_QAbstractAxis = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBarCategoryAxis object in C++ memory
    ///
    pub fn new() QBarCategoryAxis {
        return .{ .ptr = qtc.QBarCategoryAxis_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBarCategoryAxis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QBarCategoryAxis {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBarCategoryAxis_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn metaObject(self: QBarCategoryAxis) QMetaObject {
        return .{ .ptr = qtc.QBarCategoryAxis_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBarCategoryAxis, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBarCategoryAxis_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn superMetaObject(self: QBarCategoryAxis) QMetaObject {
        return .{ .ptr = qtc.QBarCategoryAxis_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBarCategoryAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarCategoryAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBarCategoryAxis_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBarCategoryAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarCategoryAxis_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBarCategoryAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarCategoryAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBarCategoryAxis_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBarCategoryAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarCategoryAxis_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn type0(self: QBarCategoryAxis) i32 {
        return qtc.QBarCategoryAxis_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QBarCategoryAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarCategoryAxis_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn superType(self: QBarCategoryAxis) i32 {
        return qtc.QBarCategoryAxis_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _categories: []const []const u8 `
    ///
    pub fn append(self: QBarCategoryAxis, allocator: std.mem.Allocator, _categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, _categories.len) catch @panic("QBarCategoryAxis.append: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (_categories, 0.._categories.len) |str_item, i|
            categories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = categories_arr.ptr,
        };
        qtc.QBarCategoryAxis_Append(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` category: []const u8 `
    ///
    pub fn append2(self: QBarCategoryAxis, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.QBarCategoryAxis_Append2(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` category: []const u8 `
    ///
    pub fn remove(self: QBarCategoryAxis, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.QBarCategoryAxis_Remove(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` index: i32 `
    ///
    /// ` category: []const u8 `
    ///
    pub fn insert(self: QBarCategoryAxis, index: i32, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.QBarCategoryAxis_Insert(@ptrCast(self.ptr), @bitCast(index), category_str);
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` oldCategory: []const u8 `
    ///
    /// ` newCategory: []const u8 `
    ///
    pub fn replace(self: QBarCategoryAxis, oldCategory: []const u8, newCategory: []const u8) void {
        const oldCategory_str = qtc.libqt_string{
            .len = oldCategory.len,
            .data = oldCategory.ptr,
        };
        const newCategory_str = qtc.libqt_string{
            .len = newCategory.len,
            .data = newCategory.ptr,
        };
        qtc.QBarCategoryAxis_Replace(@ptrCast(self.ptr), oldCategory_str, newCategory_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn clear(self: QBarCategoryAxis) void {
        qtc.QBarCategoryAxis_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCategories` instead
    ///
    pub const SetCategories = setCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _categories: []const []const u8 `
    ///
    pub fn setCategories(self: QBarCategoryAxis, allocator: std.mem.Allocator, _categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, _categories.len) catch @panic("QBarCategoryAxis.setCategories: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (_categories, 0.._categories.len) |str_item, i|
            categories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = categories_arr.ptr,
        };
        qtc.QBarCategoryAxis_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: QBarCategoryAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QBarCategoryAxis_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QBarCategoryAxis.categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarCategoryAxis.categories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn count(self: QBarCategoryAxis) i32 {
        return qtc.QBarCategoryAxis_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn at(self: QBarCategoryAxis, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QBarCategoryAxis_At(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.at: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMin` instead
    ///
    pub const SetMin = setMin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` minCategory: []const u8 `
    ///
    pub fn setMin(self: QBarCategoryAxis, minCategory: []const u8) void {
        const minCategory_str = qtc.libqt_string{
            .len = minCategory.len,
            .data = minCategory.ptr,
        };
        qtc.QBarCategoryAxis_SetMin(@ptrCast(self.ptr), minCategory_str);
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn min(self: QBarCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBarCategoryAxis_Min(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.min: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMax` instead
    ///
    pub const SetMax = setMax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` maxCategory: []const u8 `
    ///
    pub fn setMax(self: QBarCategoryAxis, maxCategory: []const u8) void {
        const maxCategory_str = qtc.libqt_string{
            .len = maxCategory.len,
            .data = maxCategory.ptr,
        };
        qtc.QBarCategoryAxis_SetMax(@ptrCast(self.ptr), maxCategory_str);
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn max(self: QBarCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBarCategoryAxis_Max(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.max: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` minCategory: []const u8 `
    ///
    /// ` maxCategory: []const u8 `
    ///
    pub fn setRange(self: QBarCategoryAxis, minCategory: []const u8, maxCategory: []const u8) void {
        const minCategory_str = qtc.libqt_string{
            .len = minCategory.len,
            .data = minCategory.ptr,
        };
        const maxCategory_str = qtc.libqt_string{
            .len = maxCategory.len,
            .data = maxCategory.ptr,
        };
        qtc.QBarCategoryAxis_SetRange(@ptrCast(self.ptr), minCategory_str, maxCategory_str);
    }

    /// ### DEPRECATED: Use `categoriesChanged` instead
    ///
    pub const CategoriesChanged = categoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn categoriesChanged(self: QBarCategoryAxis) void {
        qtc.QBarCategoryAxis_CategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCategoriesChanged` instead
    ///
    pub const OnCategoriesChanged = onCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis) callconv(.c) void `
    ///
    pub fn onCategoriesChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_CategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minChanged` instead
    ///
    pub const MinChanged = minChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _min: []const u8 `
    ///
    pub fn minChanged(self: QBarCategoryAxis, _min: []const u8) void {
        const min_str = qtc.libqt_string{
            .len = _min.len,
            .data = _min.ptr,
        };
        qtc.QBarCategoryAxis_MinChanged(@ptrCast(self.ptr), min_str);
    }

    /// ### DEPRECATED: Use `onMinChanged` instead
    ///
    pub const OnMinChanged = onMinChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, min: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMinChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxChanged` instead
    ///
    pub const MaxChanged = maxChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _max: []const u8 `
    ///
    pub fn maxChanged(self: QBarCategoryAxis, _max: []const u8) void {
        const max_str = qtc.libqt_string{
            .len = _max.len,
            .data = _max.ptr,
        };
        qtc.QBarCategoryAxis_MaxChanged(@ptrCast(self.ptr), max_str);
    }

    /// ### DEPRECATED: Use `onMaxChanged` instead
    ///
    pub const OnMaxChanged = onMaxChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, max: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMaxChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rangeChanged` instead
    ///
    pub const RangeChanged = rangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _min: []const u8 `
    ///
    /// ` _max: []const u8 `
    ///
    pub fn rangeChanged(self: QBarCategoryAxis, _min: []const u8, _max: []const u8) void {
        const min_str = qtc.libqt_string{
            .len = _min.len,
            .data = _min.ptr,
        };
        const max_str = qtc.libqt_string{
            .len = _max.len,
            .data = _max.ptr,
        };
        qtc.QBarCategoryAxis_RangeChanged(@ptrCast(self.ptr), min_str, max_str);
    }

    /// ### DEPRECATED: Use `onRangeChanged` instead
    ///
    pub const OnRangeChanged = onRangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, min: [*:0]const u8, max: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRangeChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `countChanged` instead
    ///
    pub const CountChanged = countChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn countChanged(self: QBarCategoryAxis) void {
        qtc.QBarCategoryAxis_CountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCountChanged` instead
    ///
    pub const OnCountChanged = onCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis) callconv(.c) void `
    ///
    pub fn onCountChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn show(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn hide(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLineVisible` instead
    ///
    pub const IsLineVisible = isLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isLineVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineVisible` instead
    ///
    pub const SetLineVisible = setLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setLineVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLinePen` instead
    ///
    pub const SetLinePen = setLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setLinePen(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `linePen` instead
    ///
    pub const LinePen = linePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn linePen(self: QBarCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_LinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLinePenColor` instead
    ///
    pub const SetLinePenColor = setLinePenColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLinePenColor(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `linePenColor` instead
    ///
    pub const LinePenColor = linePenColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn linePenColor(self: QBarCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LinePenColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isGridLineVisible` instead
    ///
    pub const IsGridLineVisible = isGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isGridLineVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridLineVisible` instead
    ///
    pub const SetGridLineVisible = setGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setGridLineVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridLinePen` instead
    ///
    pub const SetGridLinePen = setGridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setGridLinePen(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `gridLinePen` instead
    ///
    pub const GridLinePen = gridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn gridLinePen(self: QBarCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_GridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isMinorGridLineVisible` instead
    ///
    pub const IsMinorGridLineVisible = isMinorGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isMinorGridLineVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorGridLineVisible` instead
    ///
    pub const SetMinorGridLineVisible = setMinorGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setMinorGridLineVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorGridLinePen` instead
    ///
    pub const SetMinorGridLinePen = setMinorGridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setMinorGridLinePen(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `minorGridLinePen` instead
    ///
    pub const MinorGridLinePen = minorGridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn minorGridLinePen(self: QBarCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGridLineColor` instead
    ///
    pub const SetGridLineColor = setGridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setGridLineColor(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `gridLineColor` instead
    ///
    pub const GridLineColor = gridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn gridLineColor(self: QBarCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_GridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinorGridLineColor` instead
    ///
    pub const SetMinorGridLineColor = setMinorGridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setMinorGridLineColor(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `minorGridLineColor` instead
    ///
    pub const MinorGridLineColor = minorGridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn minorGridLineColor(self: QBarCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `labelsVisible` instead
    ///
    pub const LabelsVisible = labelsVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsVisible` instead
    ///
    pub const SetLabelsVisible = setLabelsVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setLabelsVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsBrush` instead
    ///
    pub const SetLabelsBrush = setLabelsBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setLabelsBrush(self: QBarCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `labelsBrush` instead
    ///
    pub const LabelsBrush = labelsBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsBrush(self: QBarCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_LabelsBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelsFont` instead
    ///
    pub const SetLabelsFont = setLabelsFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setLabelsFont(self: QBarCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `labelsFont` instead
    ///
    pub const LabelsFont = labelsFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsFont(self: QBarCategoryAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_LabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelsAngle` instead
    ///
    pub const SetLabelsAngle = setLabelsAngle;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn setLabelsAngle(self: QBarCategoryAxis, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `labelsAngle` instead
    ///
    pub const LabelsAngle = labelsAngle;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsAngle(self: QBarCategoryAxis) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsColor` instead
    ///
    pub const SetLabelsColor = setLabelsColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLabelsColor(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `labelsColor` instead
    ///
    pub const LabelsColor = labelsColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsColor(self: QBarCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isTitleVisible` instead
    ///
    pub const IsTitleVisible = isTitleVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isTitleVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleVisible` instead
    ///
    pub const SetTitleVisible = setTitleVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setTitleVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleBrush` instead
    ///
    pub const SetTitleBrush = setTitleBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setTitleBrush(self: QBarCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `titleBrush` instead
    ///
    pub const TitleBrush = titleBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn titleBrush(self: QBarCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleFont` instead
    ///
    pub const SetTitleFont = setTitleFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setTitleFont(self: QBarCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `titleFont` instead
    ///
    pub const TitleFont = titleFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn titleFont(self: QBarCategoryAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_TitleFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleText` instead
    ///
    pub const SetTitleText = setTitleText;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setTitleText(self: QBarCategoryAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `titleText` instead
    ///
    pub const TitleText = titleText;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn titleText(self: QBarCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.titleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `shadesVisible` instead
    ///
    pub const ShadesVisible = shadesVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn shadesVisible(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadesVisible` instead
    ///
    pub const SetShadesVisible = setShadesVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setShadesVisible(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadesPen` instead
    ///
    pub const SetShadesPen = setShadesPen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setShadesPen(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `shadesPen` instead
    ///
    pub const ShadesPen = shadesPen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn shadesPen(self: QBarCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_ShadesPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesBrush` instead
    ///
    pub const SetShadesBrush = setShadesBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setShadesBrush(self: QBarCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `shadesBrush` instead
    ///
    pub const ShadesBrush = shadesBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn shadesBrush(self: QBarCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesColor` instead
    ///
    pub const SetShadesColor = setShadesColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesColor(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `shadesColor` instead
    ///
    pub const ShadesColor = shadesColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn shadesColor(self: QBarCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesBorderColor` instead
    ///
    pub const SetShadesBorderColor = setShadesBorderColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesBorderColor(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `shadesBorderColor` instead
    ///
    pub const ShadesBorderColor = shadesBorderColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn shadesBorderColor(self: QBarCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QBarCategoryAxis) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QBarCategoryAxis) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReverse` instead
    ///
    pub const SetReverse = setReverse;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setReverse(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReverse` instead
    ///
    pub const IsReverse = isReverse;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isReverse(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsEditable` instead
    ///
    pub const SetLabelsEditable = setLabelsEditable;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setLabelsEditable(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsEditable` instead
    ///
    pub const LabelsEditable = labelsEditable;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsEditable(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsTruncated` instead
    ///
    pub const LabelsTruncated = labelsTruncated;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn labelsTruncated(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTruncateLabels` instead
    ///
    pub const SetTruncateLabels = setTruncateLabels;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn setTruncateLabels(self: QBarCategoryAxis) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `truncateLabels` instead
    ///
    pub const TruncateLabels = truncateLabels;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn truncateLabels(self: QBarCategoryAxis) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `linePenChanged` instead
    ///
    pub const LinePenChanged = linePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn linePenChanged(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onLinePenChanged` instead
    ///
    pub const OnLinePenChanged = onLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onLinePenChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lineVisibleChanged` instead
    ///
    pub const LineVisibleChanged = lineVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn lineVisibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onLineVisibleChanged` instead
    ///
    pub const OnLineVisibleChanged = onLineVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLineVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsVisibleChanged` instead
    ///
    pub const LabelsVisibleChanged = labelsVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn labelsVisibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onLabelsVisibleChanged` instead
    ///
    pub const OnLabelsVisibleChanged = onLabelsVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLabelsVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsBrushChanged` instead
    ///
    pub const LabelsBrushChanged = labelsBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn labelsBrushChanged(self: QBarCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsBrushChanged` instead
    ///
    pub const OnLabelsBrushChanged = onLabelsBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onLabelsBrushChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsFontChanged` instead
    ///
    pub const LabelsFontChanged = labelsFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QFont `
    ///
    pub fn labelsFontChanged(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QFont;
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsFontChanged` instead
    ///
    pub const OnLabelsFontChanged = onLabelsFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, pen: QFont) callconv(.c) void `
    ///
    pub fn onLabelsFontChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsAngleChanged` instead
    ///
    pub const LabelsAngleChanged = labelsAngleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn labelsAngleChanged(self: QBarCategoryAxis, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `onLabelsAngleChanged` instead
    ///
    pub const OnLabelsAngleChanged = onLabelsAngleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, angle: i32) callconv(.c) void `
    ///
    pub fn onLabelsAngleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLinePenChanged` instead
    ///
    pub const GridLinePenChanged = gridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn gridLinePenChanged(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onGridLinePenChanged` instead
    ///
    pub const OnGridLinePenChanged = onGridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onGridLinePenChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridVisibleChanged` instead
    ///
    pub const GridVisibleChanged = gridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn gridVisibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onGridVisibleChanged` instead
    ///
    pub const OnGridVisibleChanged = onGridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onGridVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridVisibleChanged` instead
    ///
    pub const MinorGridVisibleChanged = minorGridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn minorGridVisibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onMinorGridVisibleChanged` instead
    ///
    pub const OnMinorGridVisibleChanged = onMinorGridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onMinorGridVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridLinePenChanged` instead
    ///
    pub const MinorGridLinePenChanged = minorGridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn minorGridLinePenChanged(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onMinorGridLinePenChanged` instead
    ///
    pub const OnMinorGridLinePenChanged = onMinorGridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onMinorGridLinePenChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLineColorChanged` instead
    ///
    pub const GridLineColorChanged = gridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn gridLineColorChanged(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onGridLineColorChanged` instead
    ///
    pub const OnGridLineColorChanged = onGridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onGridLineColorChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridLineColorChanged` instead
    ///
    pub const MinorGridLineColorChanged = minorGridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn minorGridLineColorChanged(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onMinorGridLineColorChanged` instead
    ///
    pub const OnMinorGridLineColorChanged = onMinorGridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onMinorGridLineColorChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn colorChanged(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsColorChanged` instead
    ///
    pub const LabelsColorChanged = labelsColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn labelsColorChanged(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsColorChanged` instead
    ///
    pub const OnLabelsColorChanged = onLabelsColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelsColorChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleTextChanged` instead
    ///
    pub const TitleTextChanged = titleTextChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn titleTextChanged(self: QBarCategoryAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onTitleTextChanged` instead
    ///
    pub const OnTitleTextChanged = onTitleTextChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleTextChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleBrushChanged` instead
    ///
    pub const TitleBrushChanged = titleBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn titleBrushChanged(self: QBarCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onTitleBrushChanged` instead
    ///
    pub const OnTitleBrushChanged = onTitleBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onTitleBrushChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleVisibleChanged` instead
    ///
    pub const TitleVisibleChanged = titleVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn titleVisibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onTitleVisibleChanged` instead
    ///
    pub const OnTitleVisibleChanged = onTitleVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onTitleVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleFontChanged` instead
    ///
    pub const TitleFontChanged = titleFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn titleFontChanged(self: QBarCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onTitleFontChanged` instead
    ///
    pub const OnTitleFontChanged = onTitleFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, font: QFont) callconv(.c) void `
    ///
    pub fn onTitleFontChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesVisibleChanged` instead
    ///
    pub const ShadesVisibleChanged = shadesVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn shadesVisibleChanged(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onShadesVisibleChanged` instead
    ///
    pub const OnShadesVisibleChanged = onShadesVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onShadesVisibleChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesColorChanged` instead
    ///
    pub const ShadesColorChanged = shadesColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesColorChanged(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onShadesColorChanged` instead
    ///
    pub const OnShadesColorChanged = onShadesColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesColorChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesBorderColorChanged` instead
    ///
    pub const ShadesBorderColorChanged = shadesBorderColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesBorderColorChanged(self: QBarCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onShadesBorderColorChanged` instead
    ///
    pub const OnShadesBorderColorChanged = onShadesBorderColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesBorderColorChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesPenChanged` instead
    ///
    pub const ShadesPenChanged = shadesPenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn shadesPenChanged(self: QBarCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onShadesPenChanged` instead
    ///
    pub const OnShadesPenChanged = onShadesPenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onShadesPenChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesBrushChanged` instead
    ///
    pub const ShadesBrushChanged = shadesBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn shadesBrushChanged(self: QBarCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onShadesBrushChanged` instead
    ///
    pub const OnShadesBrushChanged = onShadesBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onShadesBrushChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverseChanged` instead
    ///
    pub const ReverseChanged = reverseChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn reverseChanged(self: QBarCategoryAxis, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self.ptr), reverse);
    }

    /// ### DEPRECATED: Use `onReverseChanged` instead
    ///
    pub const OnReverseChanged = onReverseChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, reverse: bool) callconv(.c) void `
    ///
    pub fn onReverseChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsEditableChanged` instead
    ///
    pub const LabelsEditableChanged = labelsEditableChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn labelsEditableChanged(self: QBarCategoryAxis, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `onLabelsEditableChanged` instead
    ///
    pub const OnLabelsEditableChanged = onLabelsEditableChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, editable: bool) callconv(.c) void `
    ///
    pub fn onLabelsEditableChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsTruncatedChanged` instead
    ///
    pub const LabelsTruncatedChanged = labelsTruncatedChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _labelsTruncated: bool `
    ///
    pub fn labelsTruncatedChanged(self: QBarCategoryAxis, _labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self.ptr), _labelsTruncated);
    }

    /// ### DEPRECATED: Use `onLabelsTruncatedChanged` instead
    ///
    pub const OnLabelsTruncatedChanged = onLabelsTruncatedChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, labelsTruncated: bool) callconv(.c) void `
    ///
    pub fn onLabelsTruncatedChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `truncateLabelsChanged` instead
    ///
    pub const TruncateLabelsChanged = truncateLabelsChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn truncateLabelsChanged(self: QBarCategoryAxis, _truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self.ptr), _truncateLabels);
    }

    /// ### DEPRECATED: Use `onTruncateLabelsChanged` instead
    ///
    pub const OnTruncateLabelsChanged = onTruncateLabelsChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, truncateLabels: bool) callconv(.c) void `
    ///
    pub fn onTruncateLabelsChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible1` instead
    ///
    pub const SetVisible1 = setVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setLineVisible1` instead
    ///
    pub const SetLineVisible1 = setLineVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLineVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setGridLineVisible1` instead
    ///
    pub const SetGridLineVisible1 = setGridLineVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setGridLineVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setMinorGridLineVisible1` instead
    ///
    pub const SetMinorGridLineVisible1 = setMinorGridLineVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setMinorGridLineVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setLabelsVisible1` instead
    ///
    pub const SetLabelsVisible1 = setLabelsVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLabelsVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setTitleVisible1` instead
    ///
    pub const SetTitleVisible1 = setTitleVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setTitleVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setShadesVisible1` instead
    ///
    pub const SetShadesVisible1 = setShadesVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setShadesVisible1(self: QBarCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setReverse1` instead
    ///
    pub const SetReverse1 = setReverse1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn setReverse1(self: QBarCategoryAxis, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self.ptr), reverse);
    }

    /// ### DEPRECATED: Use `setLabelsEditable1` instead
    ///
    pub const SetLabelsEditable1 = setLabelsEditable1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn setLabelsEditable1(self: QBarCategoryAxis, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `setTruncateLabels1` instead
    ///
    pub const SetTruncateLabels1 = setTruncateLabels1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn setTruncateLabels1(self: QBarCategoryAxis, _truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self.ptr), _truncateLabels);
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBarCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarCategoryAxis.objectName: Memory allocation failed");
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBarCategoryAxis, name: []const u8) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isWidgetType(self: QBarCategoryAxis) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isWindowType(self: QBarCategoryAxis) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn isQuickItemType(self: QBarCategoryAxis) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn signalsBlocked(self: QBarCategoryAxis) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBarCategoryAxis, b: bool) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn thread(self: QBarCategoryAxis) QThread {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBarCategoryAxis, _thread: anytype) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBarCategoryAxis, interval: i32) i32 {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBarCategoryAxis, time: i64) i32 {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBarCategoryAxis, id: i32) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBarCategoryAxis, id: i32) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBarCategoryAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBarCategoryAxis.children: Memory allocation failed");
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBarCategoryAxis, _parent: anytype) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBarCategoryAxis, filterObj: anytype) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBarCategoryAxis, obj: anytype) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBarCategoryAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn disconnect3(self: QBarCategoryAxis) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBarCategoryAxis, receiver: anytype) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn dumpObjectTree(self: QBarCategoryAxis) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn dumpObjectInfo(self: QBarCategoryAxis) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBarCategoryAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBarCategoryAxis, name: [:0]const u8) QVariant {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBarCategoryAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBarCategoryAxis.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarCategoryAxis.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn bindingStorage(self: QBarCategoryAxis) QBindingStorage {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn bindingStorage2(self: QBarCategoryAxis) QBindingStorage {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn destroyed(self: QBarCategoryAxis) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis) callconv(.c) void) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn parent(self: QBarCategoryAxis) QObject {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBarCategoryAxis, classname: [:0]const u8) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn deleteLater(self: QBarCategoryAxis) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBarCategoryAxis, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBarCategoryAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBarCategoryAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBarCategoryAxis, signal: [:0]const u8) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBarCategoryAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBarCategoryAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBarCategoryAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBarCategoryAxis, param1: anytype) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QObject) callconv(.c) void) void {
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBarCategoryAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarCategoryAxis_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBarCategoryAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarCategoryAxis_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QEvent) callconv(.c) bool) void {
        qtc.QBarCategoryAxis_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBarCategoryAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarCategoryAxis_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBarCategoryAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarCategoryAxis_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBarCategoryAxis_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBarCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarCategoryAxis_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBarCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarCategoryAxis_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QTimerEvent) callconv(.c) void) void {
        qtc.QBarCategoryAxis_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBarCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarCategoryAxis_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBarCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarCategoryAxis_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QChildEvent) callconv(.c) void) void {
        qtc.QBarCategoryAxis_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBarCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarCategoryAxis_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBarCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarCategoryAxis_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QEvent) callconv(.c) void) void {
        qtc.QBarCategoryAxis_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBarCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarCategoryAxis_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBarCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarCategoryAxis_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QBarCategoryAxis_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBarCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarCategoryAxis_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBarCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarCategoryAxis_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QBarCategoryAxis_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn sender(self: QBarCategoryAxis) QObject {
        return .{ .ptr = qtc.QBarCategoryAxis_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn superSender(self: QBarCategoryAxis) QObject {
        return .{ .ptr = qtc.QBarCategoryAxis_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBarCategoryAxis, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBarCategoryAxis_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn senderSignalIndex(self: QBarCategoryAxis) i32 {
        return qtc.QBarCategoryAxis_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    pub fn superSenderSignalIndex(self: QBarCategoryAxis) i32 {
        return qtc.QBarCategoryAxis_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBarCategoryAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QBarCategoryAxis_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBarCategoryAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarCategoryAxis_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBarCategoryAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarCategoryAxis_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBarCategoryAxis_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBarCategoryAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarCategoryAxis_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBarCategoryAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarCategoryAxis_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarCategoryAxis`
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, QMetaMethod) callconv(.c) bool) void {
        qtc.QBarCategoryAxis_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarCategoryAxis `
    ///
    /// ` callback: *const fn (self: QBarCategoryAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBarCategoryAxis, callback: *const fn (QBarCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#dtor.QBarCategoryAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBarCategoryAxis `
    ///
    pub fn delete(self: QBarCategoryAxis) void {
        qtc.QBarCategoryAxis_Delete(@ptrCast(self.ptr));
    }
};
