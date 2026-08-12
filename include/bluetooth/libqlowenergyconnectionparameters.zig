const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html)
pub const QLowEnergyConnectionParameters = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyConnectionParameters,

    pub const _is_QLowEnergyConnectionParameters = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyConnectionParameters object in C++ memory
    ///
    pub fn new() QLowEnergyConnectionParameters {
        return .{ .ptr = qtc.QLowEnergyConnectionParameters_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyConnectionParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyConnectionParameters `
    ///
    pub fn new2(other: anytype) QLowEnergyConnectionParameters {
        comptime _ = @TypeOf(other)._is_QLowEnergyConnectionParameters;
        return .{ .ptr = qtc.QLowEnergyConnectionParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` other: QLowEnergyConnectionParameters `
    ///
    pub fn operatorAssign(self: QLowEnergyConnectionParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyConnectionParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setIntervalRange` instead
    ///
    pub const SetIntervalRange = setIntervalRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setIntervalRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` minimum: f64 `
    ///
    /// ` maximum: f64 `
    ///
    pub fn setIntervalRange(self: QLowEnergyConnectionParameters, minimum: f64, maximum: f64) void {
        qtc.QLowEnergyConnectionParameters_SetIntervalRange(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `minimumInterval` instead
    ///
    pub const MinimumInterval = minimumInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#minimumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn minimumInterval(self: QLowEnergyConnectionParameters) f64 {
        return qtc.QLowEnergyConnectionParameters_MinimumInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumInterval` instead
    ///
    pub const MaximumInterval = maximumInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#maximumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn maximumInterval(self: QLowEnergyConnectionParameters) f64 {
        return qtc.QLowEnergyConnectionParameters_MaximumInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLatency` instead
    ///
    pub const SetLatency = setLatency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setLatency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` _latency: i32 `
    ///
    pub fn setLatency(self: QLowEnergyConnectionParameters, _latency: i32) void {
        qtc.QLowEnergyConnectionParameters_SetLatency(@ptrCast(self.ptr), @bitCast(_latency));
    }

    /// ### DEPRECATED: Use `latency` instead
    ///
    pub const Latency = latency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#latency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn latency(self: QLowEnergyConnectionParameters) i32 {
        return qtc.QLowEnergyConnectionParameters_Latency(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSupervisionTimeout` instead
    ///
    pub const SetSupervisionTimeout = setSupervisionTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setSupervisionTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` timeout: i32 `
    ///
    pub fn setSupervisionTimeout(self: QLowEnergyConnectionParameters, timeout: i32) void {
        qtc.QLowEnergyConnectionParameters_SetSupervisionTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `supervisionTimeout` instead
    ///
    pub const SupervisionTimeout = supervisionTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#supervisionTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn supervisionTimeout(self: QLowEnergyConnectionParameters) i32 {
        return qtc.QLowEnergyConnectionParameters_SupervisionTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` other: QLowEnergyConnectionParameters `
    ///
    pub fn swap(self: QLowEnergyConnectionParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyConnectionParameters_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#dtor.QLowEnergyConnectionParameters)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn delete(self: QLowEnergyConnectionParameters) void {
        qtc.QLowEnergyConnectionParameters_Delete(@ptrCast(self.ptr));
    }
};
