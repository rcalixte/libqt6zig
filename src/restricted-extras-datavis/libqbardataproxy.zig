const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBar3DSeries = @import("libqt6").QBar3DSeries;
const QBarDataItem = @import("libqt6").QBarDataItem;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractdataproxy_enums = @import("libqabstractdataproxy.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html)
pub const QBarDataProxy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBarDataProxy,

    pub const _is_QBarDataProxy = {};
    pub const _is_QAbstractDataProxy = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBarDataProxy object in C++ memory
    ///
    pub fn new() QBarDataProxy {
        return .{ .ptr = qtc.QBarDataProxy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBarDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QBarDataProxy {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBarDataProxy_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn metaObject(self: QBarDataProxy) QMetaObject {
        return .{ .ptr = qtc.QBarDataProxy_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBarDataProxy, callback: *const fn (QBarDataProxy) callconv(.c) QMetaObject) void {
        qtc.QBarDataProxy_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    pub fn superMetaObject(self: QBarDataProxy) QMetaObject {
        return .{ .ptr = qtc.QBarDataProxy_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBarDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarDataProxy_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBarDataProxy, callback: *const fn (QBarDataProxy, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBarDataProxy_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBarDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBarDataProxy_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBarDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarDataProxy_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBarDataProxy_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBarDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBarDataProxy_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QBarDataProxy_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarDataProxy.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn series(self: QBarDataProxy) QBar3DSeries {
        return .{ .ptr = qtc.QBarDataProxy_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn rowCount(self: QBarDataProxy) i32 {
        return qtc.QBarDataProxy_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowLabels` instead
    ///
    pub const RowLabels = rowLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowLabels(self: QBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_RowLabels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QBarDataProxy.rowLabels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarDataProxy.rowLabels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRowLabels` instead
    ///
    pub const SetRowLabels = setRowLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRowLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setRowLabels(self: QBarDataProxy, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QBarDataProxy.setRowLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_SetRowLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `columnLabels` instead
    ///
    pub const ColumnLabels = columnLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#columnLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnLabels(self: QBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_ColumnLabels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QBarDataProxy.columnLabels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarDataProxy.columnLabels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setColumnLabels` instead
    ///
    pub const SetColumnLabels = setColumnLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setColumnLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setColumnLabels(self: QBarDataProxy, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QBarDataProxy.setColumnLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_SetColumnLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `array` instead
    ///
    pub const Array = array;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn array(self: QBarDataProxy, allocator: std.mem.Allocator) [][]QBarDataItem {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_Array(@ptrCast(self.ptr));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_free(_list[i].data);
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QBarDataItem, _arr.len) catch @panic("QBarDataProxy.array: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val: [*]QtC.QBarDataItem = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QBarDataItem, _list[i].len) catch @panic("QBarDataProxy.array: Memory allocation failed");
            for (0.._list[i].len) |j|
                _ret[i][j] = .{ .ptr = _data_val[j] };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rowAt` instead
    ///
    pub const RowAt = rowAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    pub fn rowAt(self: QBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32) []QBarDataItem {
        const _arr: qtc.libqt_list = qtc.QBarDataProxy_RowAt(@ptrCast(self.ptr), @bitCast(rowIndex));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarDataItem, _arr.len) catch @panic("QBarDataProxy.rowAt: Memory allocation failed");
        const _data_val: [*]QtC.QBarDataItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemAt(self: QBarDataProxy, rowIndex: i32, columnIndex: i32) QBarDataItem {
        return .{ .ptr = qtc.QBarDataProxy_ItemAt(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` position: QPoint `
    ///
    pub fn itemAt2(self: QBarDataProxy, position: anytype) QBarDataItem {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QBarDataProxy_ItemAt2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `resetArray` instead
    ///
    pub const ResetArray = resetArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn resetArray(self: QBarDataProxy) void {
        qtc.QBarDataProxy_ResetArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetArray2` instead
    ///
    pub const ResetArray2 = resetArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newArray: [][]QBarDataItem `
    ///
    pub fn resetArray2(self: QBarDataProxy, allocator: std.mem.Allocator, newArray: [][]QBarDataItem) void {
        const newArray_arr = allocator.alloc(qtc.libqt_list, newArray.len) catch @panic("QBarDataProxy.resetArray2: Memory allocation failed");
        defer allocator.free(newArray_arr);
        for (newArray, 0..) |newArray_inner, i|
            newArray_arr[i] = qtc.libqt_list{
                .len = newArray_inner.len,
                .data = @ptrCast(newArray_inner.ptr),
            };
        const newArray_list = qtc.libqt_list{
            .len = newArray.len,
            .data = @ptrCast(newArray_arr.ptr),
        };
        qtc.QBarDataProxy_ResetArray2(@ptrCast(self.ptr), newArray_list);
    }

    /// ### DEPRECATED: Use `resetArray3` instead
    ///
    pub const ResetArray3 = resetArray3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newArray: [][]QBarDataItem `
    ///
    /// ` _rowLabels: []const []const u8 `
    ///
    /// ` _columnLabels: []const []const u8 `
    ///
    pub fn resetArray3(self: QBarDataProxy, allocator: std.mem.Allocator, newArray: [][]QBarDataItem, _rowLabels: []const []const u8, _columnLabels: []const []const u8) void {
        const newArray_arr = allocator.alloc(qtc.libqt_list, newArray.len) catch @panic("QBarDataProxy.resetArray3: Memory allocation failed");
        defer allocator.free(newArray_arr);
        for (newArray, 0..) |newArray_inner, i|
            newArray_arr[i] = qtc.libqt_list{
                .len = newArray_inner.len,
                .data = @ptrCast(newArray_inner.ptr),
            };
        const newArray_list = qtc.libqt_list{
            .len = newArray.len,
            .data = @ptrCast(newArray_arr.ptr),
        };
        const rowLabels_arr = allocator.alloc(qtc.libqt_string, _rowLabels.len) catch @panic("QBarDataProxy.resetArray3: Memory allocation failed");
        defer allocator.free(rowLabels_arr);
        for (_rowLabels, 0.._rowLabels.len) |str_item, i|
            rowLabels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const rowLabels_list = qtc.libqt_list{
            .len = _rowLabels.len,
            .data = rowLabels_arr.ptr,
        };
        const columnLabels_arr = allocator.alloc(qtc.libqt_string, _columnLabels.len) catch @panic("QBarDataProxy.resetArray3: Memory allocation failed");
        defer allocator.free(columnLabels_arr);
        for (_columnLabels, 0.._columnLabels.len) |str_item, i|
            columnLabels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const columnLabels_list = qtc.libqt_list{
            .len = _columnLabels.len,
            .data = columnLabels_arr.ptr,
        };
        qtc.QBarDataProxy_ResetArray3(@ptrCast(self.ptr), newArray_list, rowLabels_list, columnLabels_list);
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    pub fn setRow(self: QBarDataProxy, rowIndex: i32, row: []QBarDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QBarDataProxy_SetRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `setRow2` instead
    ///
    pub const SetRow2 = setRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    /// ` label: []const u8 `
    ///
    pub fn setRow2(self: QBarDataProxy, rowIndex: i32, row: []QBarDataItem, label: []const u8) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QBarDataProxy_SetRow2(@ptrCast(self.ptr), @bitCast(rowIndex), row_list, label_str);
    }

    /// ### DEPRECATED: Use `setRows` instead
    ///
    pub const SetRows = setRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    pub fn setRows(self: QBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QBarDataProxy.setRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        qtc.QBarDataProxy_SetRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `setRows2` instead
    ///
    pub const SetRows2 = setRows2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setRows2(self: QBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem, labels: []const []const u8) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QBarDataProxy.setRows2: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QBarDataProxy.setRows2: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_SetRows2(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list, labels_list);
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    /// ` item: QBarDataItem `
    ///
    pub fn setItem(self: QBarDataProxy, rowIndex: i32, columnIndex: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QBarDataItem;
        qtc.QBarDataProxy_SetItem(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setItem2` instead
    ///
    pub const SetItem2 = setItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` position: QPoint `
    ///
    /// ` item: QBarDataItem `
    ///
    pub fn setItem2(self: QBarDataProxy, position: anytype, item: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(item)._is_QBarDataItem;
        qtc.QBarDataProxy_SetItem2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addRow` instead
    ///
    pub const AddRow = addRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` row: []QBarDataItem `
    ///
    pub fn addRow(self: QBarDataProxy, row: []QBarDataItem) i32 {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        return qtc.QBarDataProxy_AddRow(@ptrCast(self.ptr), row_list);
    }

    /// ### DEPRECATED: Use `addRow2` instead
    ///
    pub const AddRow2 = addRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` row: []QBarDataItem `
    ///
    /// ` label: []const u8 `
    ///
    pub fn addRow2(self: QBarDataProxy, row: []QBarDataItem, label: []const u8) i32 {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return qtc.QBarDataProxy_AddRow2(@ptrCast(self.ptr), row_list, label_str);
    }

    /// ### DEPRECATED: Use `addRows` instead
    ///
    pub const AddRows = addRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    pub fn addRows(self: QBarDataProxy, allocator: std.mem.Allocator, rows: [][]QBarDataItem) i32 {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QBarDataProxy.addRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        return qtc.QBarDataProxy_AddRows(@ptrCast(self.ptr), rows_list);
    }

    /// ### DEPRECATED: Use `addRows2` instead
    ///
    pub const AddRows2 = addRows2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn addRows2(self: QBarDataProxy, allocator: std.mem.Allocator, rows: [][]QBarDataItem, labels: []const []const u8) i32 {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QBarDataProxy.addRows2: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QBarDataProxy.addRows2: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        return qtc.QBarDataProxy_AddRows2(@ptrCast(self.ptr), rows_list, labels_list);
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    pub fn insertRow(self: QBarDataProxy, rowIndex: i32, row: []QBarDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QBarDataProxy_InsertRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QBarDataItem `
    ///
    /// ` label: []const u8 `
    ///
    pub fn insertRow2(self: QBarDataProxy, rowIndex: i32, row: []QBarDataItem, label: []const u8) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QBarDataProxy_InsertRow2(@ptrCast(self.ptr), @bitCast(rowIndex), row_list, label_str);
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    pub fn insertRows(self: QBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QBarDataProxy.insertRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        qtc.QBarDataProxy_InsertRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `insertRows2` instead
    ///
    pub const InsertRows2 = insertRows2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QBarDataItem `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn insertRows2(self: QBarDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QBarDataItem, labels: []const []const u8) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QBarDataProxy.insertRows2: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QBarDataProxy.insertRows2: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QBarDataProxy_InsertRows2(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list, labels_list);
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    pub fn removeRows(self: QBarDataProxy, rowIndex: i32, removeCount: i32) void {
        qtc.QBarDataProxy_RemoveRows(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(removeCount));
    }

    /// ### DEPRECATED: Use `arrayReset` instead
    ///
    pub const ArrayReset = arrayReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#arrayReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn arrayReset(self: QBarDataProxy) void {
        qtc.QBarDataProxy_ArrayReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onArrayReset` instead
    ///
    pub const OnArrayReset = onArrayReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#arrayReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy) callconv(.c) void `
    ///
    pub fn onArrayReset(self: QBarDataProxy, callback: *const fn (QBarDataProxy) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_ArrayReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAdded` instead
    ///
    pub const RowsAdded = rowsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsAdded(self: QBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsAdded(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsAdded` instead
    ///
    pub const OnRowsAdded = onRowsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsAdded(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsChanged` instead
    ///
    pub const RowsChanged = rowsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsChanged(self: QBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsChanged(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsChanged` instead
    ///
    pub const OnRowsChanged = onRowsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsRemoved` instead
    ///
    pub const RowsRemoved = rowsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsRemoved(self: QBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsRemoved(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsInserted(self: QBarDataProxy, startIndex: i32, count: i32) void {
        qtc.QBarDataProxy_RowsInserted(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemChanged(self: QBarDataProxy, rowIndex: i32, columnIndex: i32) void {
        qtc.QBarDataProxy_ItemChanged(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, rowIndex: i32, columnIndex: i32) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn rowCountChanged(self: QBarDataProxy, count: i32) void {
        qtc.QBarDataProxy_RowCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy, i32) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowLabelsChanged` instead
    ///
    pub const RowLabelsChanged = rowLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn rowLabelsChanged(self: QBarDataProxy) void {
        qtc.QBarDataProxy_RowLabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRowLabelsChanged` instead
    ///
    pub const OnRowLabelsChanged = onRowLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy) callconv(.c) void `
    ///
    pub fn onRowLabelsChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_RowLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnLabelsChanged` instead
    ///
    pub const ColumnLabelsChanged = columnLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#columnLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn columnLabelsChanged(self: QBarDataProxy) void {
        qtc.QBarDataProxy_ColumnLabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColumnLabelsChanged` instead
    ///
    pub const OnColumnLabelsChanged = onColumnLabelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#columnLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy) callconv(.c) void `
    ///
    pub fn onColumnLabelsChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_ColumnLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesChanged` instead
    ///
    pub const SeriesChanged = seriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#seriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` _series: QBar3DSeries `
    ///
    pub fn seriesChanged(self: QBarDataProxy, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QBar3DSeries;
        qtc.QBarDataProxy_SeriesChanged(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesChanged` instead
    ///
    pub const OnSeriesChanged = onSeriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#seriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, series: QBar3DSeries) callconv(.c) void `
    ///
    pub fn onSeriesChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QBar3DSeries) callconv(.c) void) void {
        qtc.QBarDataProxy_Connect_SeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QBarDataProxy_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarDataProxy.tr2: Memory allocation failed");
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
        var _str = qtc.QBarDataProxy_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarDataProxy.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `removeRows3` instead
    ///
    pub const RemoveRows3 = removeRows3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    /// ` removeLabels: bool `
    ///
    pub fn removeRows3(self: QBarDataProxy, rowIndex: i32, removeCount: i32, removeLabels: bool) void {
        qtc.QBarDataProxy_RemoveRows3(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(removeCount), removeLabels);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QAbstractDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBarDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qabstractdataproxy_enums.DataType `
    ///
    pub fn type0(self: QBarDataProxy) i32 {
        return qtc.QAbstractDataProxy_Type(@ptrCast(self.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBarDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBarDataProxy.objectName: Memory allocation failed");
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
    /// ` self: QBarDataProxy `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBarDataProxy, name: []const u8) void {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn isWidgetType(self: QBarDataProxy) bool {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn isWindowType(self: QBarDataProxy) bool {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn isQuickItemType(self: QBarDataProxy) bool {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn signalsBlocked(self: QBarDataProxy) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBarDataProxy, b: bool) bool {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn thread(self: QBarDataProxy) QThread {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBarDataProxy, _thread: anytype) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBarDataProxy, interval: i32) i32 {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBarDataProxy, time: i64) i32 {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBarDataProxy, id: i32) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBarDataProxy, id: i32) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBarDataProxy, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBarDataProxy.children: Memory allocation failed");
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBarDataProxy, _parent: anytype) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBarDataProxy, filterObj: anytype) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBarDataProxy, obj: anytype) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBarDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn disconnect3(self: QBarDataProxy) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBarDataProxy, receiver: anytype) bool {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn dumpObjectTree(self: QBarDataProxy) void {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn dumpObjectInfo(self: QBarDataProxy) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBarDataProxy, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBarDataProxy, name: [:0]const u8) QVariant {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBarDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QBarDataProxy.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBarDataProxy.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBarDataProxy `
    ///
    pub fn bindingStorage(self: QBarDataProxy) QBindingStorage {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn bindingStorage2(self: QBarDataProxy) QBindingStorage {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn destroyed(self: QBarDataProxy) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBarDataProxy, callback: *const fn (QBarDataProxy) callconv(.c) void) void {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn parent(self: QBarDataProxy) QObject {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBarDataProxy, classname: [:0]const u8) bool {
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
    /// ` self: QBarDataProxy `
    ///
    pub fn deleteLater(self: QBarDataProxy) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBarDataProxy, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBarDataProxy, time: i64, timerType: i32) i32 {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBarDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBarDataProxy, signal: [:0]const u8) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBarDataProxy, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBarDataProxy, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBarDataProxy, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBarDataProxy, param1: anytype) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QObject) callconv(.c) void) void {
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBarDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarDataProxy_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBarDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarDataProxy_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QEvent) callconv(.c) bool) void {
        qtc.QBarDataProxy_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBarDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarDataProxy_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBarDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBarDataProxy_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBarDataProxy_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarDataProxy_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBarDataProxy_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QTimerEvent) callconv(.c) void) void {
        qtc.QBarDataProxy_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarDataProxy_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBarDataProxy_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QChildEvent) callconv(.c) void) void {
        qtc.QBarDataProxy_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarDataProxy_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBarDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBarDataProxy_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QEvent) callconv(.c) void) void {
        qtc.QBarDataProxy_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarDataProxy_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarDataProxy_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QBarDataProxy_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarDataProxy_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBarDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBarDataProxy_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarDataProxy`
    ///
    /// ` callback: *const fn (self: QBarDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBarDataProxy, callback: *const fn (QBarDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QBarDataProxy_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBarDataProxy `
    ///
    pub fn sender(self: QBarDataProxy) QObject {
        return .{ .ptr = qtc.QBarDataProxy_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBarDataProxy `
    ///
    pub fn senderSignalIndex(self: QBarDataProxy) i32 {
        return qtc.QBarDataProxy_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBarDataProxy, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBarDataProxy_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBarDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBarDataProxy, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBarDataProxy_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBarDataProxy `
    ///
    /// ` callback: *const fn (self: QBarDataProxy, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBarDataProxy, callback: *const fn (QBarDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#dtor.QBarDataProxy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBarDataProxy `
    ///
    pub fn delete(self: QBarDataProxy) void {
        qtc.QBarDataProxy_Delete(@ptrCast(self.ptr));
    }
};
