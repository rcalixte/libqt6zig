const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlace = @import("libqt6").QPlace;
const QPlaceSearchResult = @import("libqt6").QPlaceSearchResult;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html)
pub const QPlaceMatchRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceMatchRequest,

    pub const _is_QPlaceMatchRequest = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceMatchRequest object in C++ memory
    ///
    pub fn new() QPlaceMatchRequest {
        return .{ .ptr = qtc.QPlaceMatchRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceMatchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceMatchRequest `
    ///
    pub fn new2(other: anytype) QPlaceMatchRequest {
        comptime _ = @TypeOf(other)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceMatchRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` other: QPlaceMatchRequest `
    ///
    pub fn operatorAssign(self: QPlaceMatchRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceMatchRequest;
        qtc.QPlaceMatchRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` other: QPlaceMatchRequest `
    ///
    pub fn swap(self: QPlaceMatchRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceMatchRequest;
        qtc.QPlaceMatchRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `places` instead
    ///
    pub const Places = places;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#places)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn places(self: QPlaceMatchRequest, allocator: std.mem.Allocator) []QPlace {
        const _arr: qtc.libqt_list = qtc.QPlaceMatchRequest_Places(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlace, _arr.len) catch @panic("QPlaceMatchRequest.places: Memory allocation failed");
        const _data_val: [*]QtC.QPlace = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setPlaces` instead
    ///
    pub const SetPlaces = setPlaces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` _places: []QPlace `
    ///
    pub fn setPlaces(self: QPlaceMatchRequest, _places: []QPlace) void {
        const places_list = qtc.libqt_list{
            .len = _places.len,
            .data = @ptrCast(_places.ptr),
        };
        qtc.QPlaceMatchRequest_SetPlaces(@ptrCast(self.ptr), places_list);
    }

    /// ### DEPRECATED: Use `setResults` instead
    ///
    pub const SetResults = setResults;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setResults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` results: []QPlaceSearchResult `
    ///
    pub fn setResults(self: QPlaceMatchRequest, results: []QPlaceSearchResult) void {
        const results_list = qtc.libqt_list{
            .len = results.len,
            .data = @ptrCast(results.ptr),
        };
        qtc.QPlaceMatchRequest_SetResults(@ptrCast(self.ptr), results_list);
    }

    /// ### DEPRECATED: Use `parameters` instead
    ///
    pub const Parameters = parameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#parameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parameters(self: QPlaceMatchRequest, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QPlaceMatchRequest_Parameters(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPlaceMatchRequest.parameters: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QPlaceMatchRequest.parameters: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setParameters` instead
    ///
    pub const SetParameters = setParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn setParameters(self: QPlaceMatchRequest, allocator: std.mem.Allocator, _parameters: ArrayMap_constu8_QVariant) void {
        const parameters_count = _parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QPlaceMatchRequest.setParameters: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QPlaceMatchRequest.setParameters: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = _parameters.iterator();
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
        qtc.QPlaceMatchRequest_SetParameters(@ptrCast(self.ptr), parameters_map);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    pub fn clear(self: QPlaceMatchRequest) void {
        qtc.QPlaceMatchRequest_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#dtor.QPlaceMatchRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceMatchRequest `
    ///
    pub fn delete(self: QPlaceMatchRequest) void {
        qtc.QPlaceMatchRequest_Delete(@ptrCast(self.ptr));
    }
};
