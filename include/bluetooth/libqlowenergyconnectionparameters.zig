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

    /// New constructs a new QLowEnergyConnectionParameters object.
    ///
    pub fn New() QLowEnergyConnectionParameters {
        return .{ .ptr = qtc.QLowEnergyConnectionParameters_new() };
    }

    /// New2 constructs a new QLowEnergyConnectionParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyConnectionParameters `
    ///
    pub fn New2(other: anytype) QLowEnergyConnectionParameters {
        comptime _ = @TypeOf(other)._is_QLowEnergyConnectionParameters;
        return .{ .ptr = qtc.QLowEnergyConnectionParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` other: QLowEnergyConnectionParameters `
    ///
    pub fn OperatorAssign(self: QLowEnergyConnectionParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyConnectionParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn SetIntervalRange(self: QLowEnergyConnectionParameters, minimum: f64, maximum: f64) void {
        qtc.QLowEnergyConnectionParameters_SetIntervalRange(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#minimumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn MinimumInterval(self: QLowEnergyConnectionParameters) f64 {
        return qtc.QLowEnergyConnectionParameters_MinimumInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#maximumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn MaximumInterval(self: QLowEnergyConnectionParameters) f64 {
        return qtc.QLowEnergyConnectionParameters_MaximumInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setLatency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` latency: i32 `
    ///
    pub fn SetLatency(self: QLowEnergyConnectionParameters, latency: i32) void {
        qtc.QLowEnergyConnectionParameters_SetLatency(@ptrCast(self.ptr), @bitCast(latency));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#latency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn Latency(self: QLowEnergyConnectionParameters) i32 {
        return qtc.QLowEnergyConnectionParameters_Latency(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setSupervisionTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetSupervisionTimeout(self: QLowEnergyConnectionParameters, timeout: i32) void {
        qtc.QLowEnergyConnectionParameters_SetSupervisionTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#supervisionTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn SupervisionTimeout(self: QLowEnergyConnectionParameters) i32 {
        return qtc.QLowEnergyConnectionParameters_SupervisionTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    /// ` other: QLowEnergyConnectionParameters `
    ///
    pub fn Swap(self: QLowEnergyConnectionParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyConnectionParameters;
        qtc.QLowEnergyConnectionParameters_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#dtor.QLowEnergyConnectionParameters)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyConnectionParameters `
    ///
    pub fn Delete(self: QLowEnergyConnectionParameters) void {
        qtc.QLowEnergyConnectionParameters_Delete(@ptrCast(self.ptr));
    }
};
