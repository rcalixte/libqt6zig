const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html)
pub const qplaceicon = struct {
    /// New constructs a new QPlaceIcon object.
    ///
    pub fn New() QtC.QPlaceIcon {
        return qtc.QPlaceIcon_new();
    }

    /// New2 constructs a new QPlaceIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceIcon `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceIcon {
        return qtc.QPlaceIcon_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    /// ` other: QtC.QPlaceIcon `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceIcon_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    /// ` other: QtC.QPlaceIcon `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceIcon_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QPlaceIcon_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    pub fn Manager(self: ?*anyopaque) QtC.QPlaceManager {
        return qtc.QPlaceIcon_Manager(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#setManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    /// ` manager: QtC.QPlaceManager `
    ///
    pub fn SetManager(self: ?*anyopaque, manager: ?*anyopaque) void {
        qtc.QPlaceIcon_SetManager(@ptrCast(self), @ptrCast(manager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#parameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QPlaceIcon_Parameters(@ptrCast(self));
        var _ret: arraymap_constu8_qtcqvariant = .empty;
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
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qplaceicon.Parameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#setParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    /// ` parameters: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetParameters(self: ?*anyopaque, parameters: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        qtc.QPlaceIcon_SetParameters(@ptrCast(self), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPlaceIcon_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceIcon `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn Url1(self: ?*anyopaque, size: ?*anyopaque) QtC.QUrl {
        return qtc.QPlaceIcon_Url1(@ptrCast(self), @ptrCast(size));
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
    /// ` self: QtC.QPlaceIcon `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPlaceIcon_Delete(@ptrCast(self));
    }
};
