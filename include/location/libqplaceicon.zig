const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlaceManager = @import("libqt6").QPlaceManager;
const QSize = @import("libqt6").QSize;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html)
pub const QPlaceIcon = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceIcon,

    pub const _is_QPlaceIcon = {};

    /// New constructs a new QPlaceIcon object.
    ///
    pub fn New() QPlaceIcon {
        return .{ .ptr = qtc.QPlaceIcon_new() };
    }

    /// New2 constructs a new QPlaceIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceIcon `
    ///
    pub fn New2(other: anytype) QPlaceIcon {
        comptime _ = @TypeOf(other)._is_QPlaceIcon;
        return .{ .ptr = qtc.QPlaceIcon_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    /// ` other: QPlaceIcon `
    ///
    pub fn OperatorAssign(self: QPlaceIcon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceIcon;
        qtc.QPlaceIcon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    /// ` other: QPlaceIcon `
    ///
    pub fn Swap(self: QPlaceIcon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceIcon;
        qtc.QPlaceIcon_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    pub fn Url(self: QPlaceIcon) QUrl {
        return .{ .ptr = qtc.QPlaceIcon_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    pub fn Manager(self: QPlaceIcon) QPlaceManager {
        return .{ .ptr = qtc.QPlaceIcon_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#setManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    /// ` manager: QPlaceManager `
    ///
    pub fn SetManager(self: QPlaceIcon, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_QPlaceManager;
        qtc.QPlaceIcon_SetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#parameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: QPlaceIcon, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QPlaceIcon_Parameters(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qplaceicon.Parameters: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qplaceicon.Parameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#setParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn SetParameters(self: QPlaceIcon, allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) void {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qplaceicon.SetParameters: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qplaceicon.SetParameters: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |it_entry| : (i += 1) {
            const parameters_key = it_entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = parameters_key.len,
                .data = parameters_key.ptr,
            };
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        qtc.QPlaceIcon_SetParameters(@ptrCast(self.ptr), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    pub fn IsEmpty(self: QPlaceIcon) bool {
        return qtc.QPlaceIcon_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceIcon `
    ///
    /// ` size: QSize `
    ///
    pub fn Url1(self: QPlaceIcon, size: anytype) QUrl {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPlaceIcon_Url1(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#dtor.QPlaceIcon)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceIcon `
    ///
    pub fn Delete(self: QPlaceIcon) void {
        qtc.QPlaceIcon_Delete(@ptrCast(self.ptr));
    }
};
