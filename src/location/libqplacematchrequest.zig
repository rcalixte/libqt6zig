const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html)
pub const qplacematchrequest = struct {
    /// New constructs a new QPlaceMatchRequest object.
    ///
    pub fn New() QtC.QPlaceMatchRequest {
        return qtc.QPlaceMatchRequest_new();
    }

    /// New2 constructs a new QPlaceMatchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceMatchRequest `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceMatchRequest {
        return qtc.QPlaceMatchRequest_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` other: QtC.QPlaceMatchRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceMatchRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` other: QtC.QPlaceMatchRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceMatchRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#places)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Places(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPlace {
        const _arr: qtc.libqt_list = qtc.QPlaceMatchRequest_Places(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlace, _arr.len) catch @panic("qplacematchrequest.Places: Memory allocation failed");
        const _data: [*]QtC.QPlace = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` places: []QtC.QPlace `
    ///
    pub fn SetPlaces(self: ?*anyopaque, places: []QtC.QPlace) void {
        const places_list = qtc.libqt_list{
            .len = places.len,
            .data = @ptrCast(places.ptr),
        };
        qtc.QPlaceMatchRequest_SetPlaces(@ptrCast(self), places_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setResults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` results: []QtC.QPlaceSearchResult `
    ///
    pub fn SetResults(self: ?*anyopaque, results: []QtC.QPlaceSearchResult) void {
        const results_list = qtc.libqt_list{
            .len = results.len,
            .data = @ptrCast(results.ptr),
        };
        qtc.QPlaceMatchRequest_SetResults(@ptrCast(self), results_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#parameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QPlaceMatchRequest_Parameters(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qplacematchrequest.Parameters: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qplacematchrequest.Parameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetParameters(self: ?*anyopaque, parameters: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qplacematchrequest.SetParameters: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qplacematchrequest.SetParameters: Memory allocation failed");
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
        qtc.QPlaceMatchRequest_SetParameters(@ptrCast(self), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPlaceMatchRequest_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#dtor.QPlaceMatchRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceMatchRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceMatchRequest_Delete(@ptrCast(self));
    }
};
