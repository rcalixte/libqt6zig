const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html)
pub const QQuickGraphicsConfiguration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickGraphicsConfiguration,

    pub const _is_QQuickGraphicsConfiguration = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickGraphicsConfiguration object in C++ memory
    ///
    pub fn new() QQuickGraphicsConfiguration {
        return .{ .ptr = qtc.QQuickGraphicsConfiguration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickGraphicsConfiguration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickGraphicsConfiguration `
    ///
    pub fn new2(other: anytype) QQuickGraphicsConfiguration {
        comptime _ = @TypeOf(other)._is_QQuickGraphicsConfiguration;
        return .{ .ptr = qtc.QQuickGraphicsConfiguration_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` other: QQuickGraphicsConfiguration `
    ///
    pub fn operatorAssign(self: QQuickGraphicsConfiguration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QQuickGraphicsConfiguration;
        qtc.QQuickGraphicsConfiguration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `preferredInstanceExtensions` instead
    ///
    pub const PreferredInstanceExtensions = preferredInstanceExtensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#preferredInstanceExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preferredInstanceExtensions(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QQuickGraphicsConfiguration_PreferredInstanceExtensions();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickGraphicsConfiguration.preferredInstanceExtensions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickGraphicsConfiguration.preferredInstanceExtensions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setDeviceExtensions` instead
    ///
    pub const SetDeviceExtensions = setDeviceExtensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDeviceExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` extensions: [][]u8 `
    ///
    pub fn setDeviceExtensions(self: QQuickGraphicsConfiguration, allocator: std.mem.Allocator, extensions: [][]u8) void {
        const extensions_arr = allocator.alloc(qtc.libqt_string, extensions.len) catch @panic("QQuickGraphicsConfiguration.setDeviceExtensions: Memory allocation failed");
        defer allocator.free(extensions_arr);
        for (extensions, 0..extensions.len) |str_item, i|
            extensions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const extensions_list = qtc.libqt_list{
            .len = extensions.len,
            .data = extensions_arr.ptr,
        };
        qtc.QQuickGraphicsConfiguration_SetDeviceExtensions(@ptrCast(self.ptr), extensions_list);
    }

    /// ### DEPRECATED: Use `deviceExtensions` instead
    ///
    pub const DeviceExtensions = deviceExtensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#deviceExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn deviceExtensions(self: QQuickGraphicsConfiguration, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QQuickGraphicsConfiguration_DeviceExtensions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickGraphicsConfiguration.deviceExtensions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickGraphicsConfiguration.deviceExtensions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setDepthBufferFor2D` instead
    ///
    pub const SetDepthBufferFor2D = setDepthBufferFor2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDepthBufferFor2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setDepthBufferFor2D(self: QQuickGraphicsConfiguration, enable: bool) void {
        qtc.QQuickGraphicsConfiguration_SetDepthBufferFor2D(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isDepthBufferEnabledFor2D` instead
    ///
    pub const IsDepthBufferEnabledFor2D = isDepthBufferEnabledFor2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isDepthBufferEnabledFor2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn isDepthBufferEnabledFor2D(self: QQuickGraphicsConfiguration) bool {
        return qtc.QQuickGraphicsConfiguration_IsDepthBufferEnabledFor2D(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDebugLayer` instead
    ///
    pub const SetDebugLayer = setDebugLayer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDebugLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setDebugLayer(self: QQuickGraphicsConfiguration, enable: bool) void {
        qtc.QQuickGraphicsConfiguration_SetDebugLayer(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isDebugLayerEnabled` instead
    ///
    pub const IsDebugLayerEnabled = isDebugLayerEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isDebugLayerEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn isDebugLayerEnabled(self: QQuickGraphicsConfiguration) bool {
        return qtc.QQuickGraphicsConfiguration_IsDebugLayerEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDebugMarkers` instead
    ///
    pub const SetDebugMarkers = setDebugMarkers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDebugMarkers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setDebugMarkers(self: QQuickGraphicsConfiguration, enable: bool) void {
        qtc.QQuickGraphicsConfiguration_SetDebugMarkers(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isDebugMarkersEnabled` instead
    ///
    pub const IsDebugMarkersEnabled = isDebugMarkersEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isDebugMarkersEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn isDebugMarkersEnabled(self: QQuickGraphicsConfiguration) bool {
        return qtc.QQuickGraphicsConfiguration_IsDebugMarkersEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamps` instead
    ///
    pub const SetTimestamps = setTimestamps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setTimestamps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setTimestamps(self: QQuickGraphicsConfiguration, enable: bool) void {
        qtc.QQuickGraphicsConfiguration_SetTimestamps(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `timestampsEnabled` instead
    ///
    pub const TimestampsEnabled = timestampsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#timestampsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn timestampsEnabled(self: QQuickGraphicsConfiguration) bool {
        return qtc.QQuickGraphicsConfiguration_TimestampsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferSoftwareDevice` instead
    ///
    pub const SetPreferSoftwareDevice = setPreferSoftwareDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setPreferSoftwareDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setPreferSoftwareDevice(self: QQuickGraphicsConfiguration, enable: bool) void {
        qtc.QQuickGraphicsConfiguration_SetPreferSoftwareDevice(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `prefersSoftwareDevice` instead
    ///
    pub const PrefersSoftwareDevice = prefersSoftwareDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#prefersSoftwareDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn prefersSoftwareDevice(self: QQuickGraphicsConfiguration) bool {
        return qtc.QQuickGraphicsConfiguration_PrefersSoftwareDevice(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutomaticPipelineCache` instead
    ///
    pub const SetAutomaticPipelineCache = setAutomaticPipelineCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setAutomaticPipelineCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutomaticPipelineCache(self: QQuickGraphicsConfiguration, enable: bool) void {
        qtc.QQuickGraphicsConfiguration_SetAutomaticPipelineCache(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isAutomaticPipelineCacheEnabled` instead
    ///
    pub const IsAutomaticPipelineCacheEnabled = isAutomaticPipelineCacheEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isAutomaticPipelineCacheEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn isAutomaticPipelineCacheEnabled(self: QQuickGraphicsConfiguration) bool {
        return qtc.QQuickGraphicsConfiguration_IsAutomaticPipelineCacheEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPipelineCacheSaveFile` instead
    ///
    pub const SetPipelineCacheSaveFile = setPipelineCacheSaveFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setPipelineCacheSaveFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn setPipelineCacheSaveFile(self: QQuickGraphicsConfiguration, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QQuickGraphicsConfiguration_SetPipelineCacheSaveFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `pipelineCacheSaveFile` instead
    ///
    pub const PipelineCacheSaveFile = pipelineCacheSaveFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#pipelineCacheSaveFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pipelineCacheSaveFile(self: QQuickGraphicsConfiguration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickGraphicsConfiguration_PipelineCacheSaveFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickGraphicsConfiguration.pipelineCacheSaveFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPipelineCacheLoadFile` instead
    ///
    pub const SetPipelineCacheLoadFile = setPipelineCacheLoadFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setPipelineCacheLoadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn setPipelineCacheLoadFile(self: QQuickGraphicsConfiguration, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QQuickGraphicsConfiguration_SetPipelineCacheLoadFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `pipelineCacheLoadFile` instead
    ///
    pub const PipelineCacheLoadFile = pipelineCacheLoadFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#pipelineCacheLoadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pipelineCacheLoadFile(self: QQuickGraphicsConfiguration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickGraphicsConfiguration_PipelineCacheLoadFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickGraphicsConfiguration.pipelineCacheLoadFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#dtor.QQuickGraphicsConfiguration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickGraphicsConfiguration `
    ///
    pub fn delete(self: QQuickGraphicsConfiguration) void {
        qtc.QQuickGraphicsConfiguration_Delete(@ptrCast(self.ptr));
    }
};
