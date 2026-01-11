const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)
pub const qgeopositioninfosourcefactory = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#positionInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfoSourceFactory `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PositionInfoSource(self: ?*anyopaque, parent: ?*anyopaque, parameters: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QGeoPositionInfoSource {
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters.count()) catch @panic("qgeopositioninfosourcefactory.PositionInfoSource: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters.count()) catch @panic("qgeopositioninfosourcefactory.PositionInfoSource: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            parameters_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters.count(),
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoPositionInfoSourceFactory_PositionInfoSource(@ptrCast(self), @ptrCast(parent), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#satelliteInfoSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfoSourceFactory `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SatelliteInfoSource(self: ?*anyopaque, parent: ?*anyopaque, parameters: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QGeoSatelliteInfoSource {
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters.count()) catch @panic("qgeopositioninfosourcefactory.SatelliteInfoSource: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters.count()) catch @panic("qgeopositioninfosourcefactory.SatelliteInfoSource: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            parameters_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters.count(),
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoPositionInfoSourceFactory_SatelliteInfoSource(@ptrCast(self), @ptrCast(parent), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#areaMonitor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfoSourceFactory `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AreaMonitor(self: ?*anyopaque, parent: ?*anyopaque, parameters: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QGeoAreaMonitorSource {
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters.count()) catch @panic("qgeopositioninfosourcefactory.AreaMonitor: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters.count()) catch @panic("qgeopositioninfosourcefactory.AreaMonitor: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            parameters_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters.count(),
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return qtc.QGeoPositionInfoSourceFactory_AreaMonitor(@ptrCast(self), @ptrCast(parent), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoPositionInfoSourceFactory `
    ///
    /// ` param1: QtC.QGeoPositionInfoSourceFactory `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGeoPositionInfoSourceFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#dtor.QGeoPositionInfoSourceFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoPositionInfoSourceFactory `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoPositionInfoSourceFactory_Delete(@ptrCast(self));
    }
};
