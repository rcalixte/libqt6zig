const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html)
pub const qlowenergyconnectionparameters = struct {
    /// New constructs a new QLowEnergyConnectionParameters object.
    ///
    pub fn New() QtC.QLowEnergyConnectionParameters {
        return qtc.QLowEnergyConnectionParameters_new();
    }

    /// New2 constructs a new QLowEnergyConnectionParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyConnectionParameters {
        return qtc.QLowEnergyConnectionParameters_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    /// ` other: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyConnectionParameters_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setIntervalRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    /// ` minimum: f64 `
    ///
    /// ` maximum: f64 `
    ///
    pub fn SetIntervalRange(self: ?*anyopaque, minimum: f64, maximum: f64) void {
        qtc.QLowEnergyConnectionParameters_SetIntervalRange(@ptrCast(self), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#minimumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn MinimumInterval(self: ?*anyopaque) f64 {
        return qtc.QLowEnergyConnectionParameters_MinimumInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#maximumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn MaximumInterval(self: ?*anyopaque) f64 {
        return qtc.QLowEnergyConnectionParameters_MaximumInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setLatency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    /// ` latency: i32 `
    ///
    pub fn SetLatency(self: ?*anyopaque, latency: i32) void {
        qtc.QLowEnergyConnectionParameters_SetLatency(@ptrCast(self), @bitCast(latency));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#latency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn Latency(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyConnectionParameters_Latency(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setSupervisionTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetSupervisionTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QLowEnergyConnectionParameters_SetSupervisionTimeout(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#supervisionTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn SupervisionTimeout(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyConnectionParameters_SupervisionTimeout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    /// ` other: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyConnectionParameters_Swap(@ptrCast(self), @ptrCast(other));
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
    /// ` self: QtC.QLowEnergyConnectionParameters `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyConnectionParameters_Delete(@ptrCast(self));
    }
};
