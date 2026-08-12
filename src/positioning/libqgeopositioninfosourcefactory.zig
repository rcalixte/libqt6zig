const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoAreaMonitorSource = @import("libqt6").QGeoAreaMonitorSource;
const QGeoPositionInfoSource = @import("libqt6").QGeoPositionInfoSource;
const QGeoSatelliteInfoSource = @import("libqt6").QGeoSatelliteInfoSource;
const QObject = @import("libqt6").QObject;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)
pub const QGeoPositionInfoSourceFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoPositionInfoSourceFactory,

    pub const _is_QGeoPositionInfoSourceFactory = {};

    /// ### DEPRECATED: Use `positionInfoSource` instead
    ///
    pub const PositionInfoSource = positionInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#positionInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QObject `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn positionInfoSource(self: QGeoPositionInfoSourceFactory, allocator: std.mem.Allocator, parent: anytype, parameters: ArrayMap_constu8_QVariant) QGeoPositionInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoPositionInfoSourceFactory.positionInfoSource: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoPositionInfoSourceFactory.positionInfoSource: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSourceFactory_PositionInfoSource(@ptrCast(self.ptr), @ptrCast(parent.ptr), parameters_map) };
    }

    /// ### DEPRECATED: Use `satelliteInfoSource` instead
    ///
    pub const SatelliteInfoSource = satelliteInfoSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#satelliteInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QObject `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn satelliteInfoSource(self: QGeoPositionInfoSourceFactory, allocator: std.mem.Allocator, parent: anytype, parameters: ArrayMap_constu8_QVariant) QGeoSatelliteInfoSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoPositionInfoSourceFactory.satelliteInfoSource: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoPositionInfoSourceFactory.satelliteInfoSource: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSourceFactory_SatelliteInfoSource(@ptrCast(self.ptr), @ptrCast(parent.ptr), parameters_map) };
    }

    /// ### DEPRECATED: Use `areaMonitor` instead
    ///
    pub const AreaMonitor = areaMonitor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#areaMonitor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QObject `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn areaMonitor(self: QGeoPositionInfoSourceFactory, allocator: std.mem.Allocator, parent: anytype, parameters: ArrayMap_constu8_QVariant) QGeoAreaMonitorSource {
        comptime _ = @TypeOf(parent)._is_QObject;
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoPositionInfoSourceFactory.areaMonitor: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoPositionInfoSourceFactory.areaMonitor: Memory allocation failed");
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
        return .{ .ptr = qtc.QGeoPositionInfoSourceFactory_AreaMonitor(@ptrCast(self.ptr), @ptrCast(parent.ptr), parameters_map) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    /// ` param1: QGeoPositionInfoSourceFactory `
    ///
    pub fn operatorAssign(self: QGeoPositionInfoSourceFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGeoPositionInfoSourceFactory;
        qtc.QGeoPositionInfoSourceFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#dtor.QGeoPositionInfoSourceFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoPositionInfoSourceFactory `
    ///
    pub fn delete(self: QGeoPositionInfoSourceFactory) void {
        qtc.QGeoPositionInfoSourceFactory_Delete(@ptrCast(self.ptr));
    }
};
