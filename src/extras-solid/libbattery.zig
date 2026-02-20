const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const battery_enums = enums;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/solid-battery.html)
pub const solid__battery = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Solid__Battery_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__Battery_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Solid__Battery_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#deviceInterfaceType)
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn DeviceInterfaceType() i32 {
        return qtc.Solid__Battery_DeviceInterfaceType();
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#isPresent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsPresent(self: ?*anyopaque) bool {
        return qtc.Solid__Battery_IsPresent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ## Returns:
    ///
    /// ` battery_enums.BatteryType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargePercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn ChargePercent(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_ChargePercent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#capacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Capacity(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Capacity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#cycleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn CycleCount(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_CycleCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#isRechargeable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsRechargeable(self: ?*anyopaque) bool {
        return qtc.Solid__Battery_IsRechargeable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#isPowerSupply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsPowerSupply(self: ?*anyopaque) bool {
        return qtc.Solid__Battery_IsPowerSupply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ## Returns:
    ///
    /// ` battery_enums.ChargeState `
    ///
    pub fn ChargeState(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_ChargeState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn TimeToEmpty(self: ?*anyopaque) i64 {
        return qtc.Solid__Battery_TimeToEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn TimeToFull(self: ?*anyopaque) i64 {
        return qtc.Solid__Battery_TimeToFull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#technology)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ## Returns:
    ///
    /// ` battery_enums.Technology `
    ///
    pub fn Technology(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Technology(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Energy(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_Energy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn EnergyFull(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_EnergyFull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesign)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn EnergyFullDesign(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_EnergyFullDesign(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn EnergyRate(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_EnergyRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#voltage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Voltage(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_Voltage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#temperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Temperature(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_Temperature(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#serial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Serial(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Battery_Serial(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.Serial: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn RemainingTime(self: ?*anyopaque) i64 {
        return qtc.Solid__Battery_RemainingTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#presentStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` newState: bool `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn PresentStateChanged(self: ?*anyopaque, newState: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_PresentStateChanged(@ptrCast(self), newState, udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#presentStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, newState: bool, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPresentStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_PresentStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargePercentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` value: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ChargePercentChanged(self: ?*anyopaque, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_ChargePercentChanged(@ptrCast(self), @bitCast(value), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargePercentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnChargePercentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargePercentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#capacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` value: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CapacityChanged(self: ?*anyopaque, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_CapacityChanged(@ptrCast(self), @bitCast(value), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#capacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCapacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_CapacityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#cycleCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` value: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CycleCountChanged(self: ?*anyopaque, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_CycleCountChanged(@ptrCast(self), @bitCast(value), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#cycleCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCycleCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_CycleCountChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` newState: bool `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn PowerSupplyStateChanged(self: ?*anyopaque, newState: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_PowerSupplyStateChanged(@ptrCast(self), newState, udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, newState: bool, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPowerSupplyStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_PowerSupplyStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` newState: i32 `
    ///
    pub fn ChargeStateChanged(self: ?*anyopaque, newState: i32) void {
        qtc.Solid__Battery_ChargeStateChanged(@ptrCast(self), @bitCast(newState));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, newState: i32) callconv(.c) void `
    ///
    pub fn OnChargeStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargeStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` time: i64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TimeToEmptyChanged(self: ?*anyopaque, time: i64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TimeToEmptyChanged(@ptrCast(self), @bitCast(time), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, time: i64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTimeToEmptyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TimeToEmptyChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToFullChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` time: i64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TimeToFullChanged(self: ?*anyopaque, time: i64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TimeToFullChanged(@ptrCast(self), @bitCast(time), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToFullChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, time: i64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTimeToFullChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TimeToFullChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` energy: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyChanged(self: ?*anyopaque, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyChanged(@ptrCast(self), @bitCast(energy), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` energy: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyFullChanged(self: ?*anyopaque, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyFullChanged(@ptrCast(self), @bitCast(energy), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyFullChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyFullChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` energy: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyFullDesignChanged(self: ?*anyopaque, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyFullDesignChanged(@ptrCast(self), @bitCast(energy), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyFullDesignChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyFullDesignChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` energyRate: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyRateChanged(self: ?*anyopaque, energyRate: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyRateChanged(@ptrCast(self), @bitCast(energyRate), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, energyRate: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyRateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#voltageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` voltage: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn VoltageChanged(self: ?*anyopaque, voltage: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_VoltageChanged(@ptrCast(self), @bitCast(voltage), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#voltageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, voltage: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnVoltageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_VoltageChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#temperatureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` temperature: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TemperatureChanged(self: ?*anyopaque, temperature: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TemperatureChanged(@ptrCast(self), @bitCast(temperature), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#temperatureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, temperature: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTemperatureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TemperatureChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#remainingTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` time: i64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn RemainingTimeChanged(self: ?*anyopaque, time: i64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_RemainingTimeChanged(@ptrCast(self), @bitCast(time), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#remainingTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, time: i64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemainingTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_RemainingTimeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` newState: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ChargeStateChanged2(self: ?*anyopaque, newState: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_ChargeStateChanged2(@ptrCast(self), @bitCast(newState), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, newState: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnChargeStateChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargeStateChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypeToString(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeToString(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.TypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn StringToType(typeVal: []const u8) i32 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.Solid__DeviceInterface_StringToType(typeVal_str);
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypeDescription(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__DeviceInterface_TypeDescription(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.TypeDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("solid__battery.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("solid__battery.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("solid__battery.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    /// ` callback: *const fn (self: QtC.Solid__Battery, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Solid__Battery `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Solid__Battery_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/solid-battery.html#public-types)
pub const enums = struct {
    pub const BatteryType = enum(i32) {
        pub const UnknownBattery: i32 = 0;
        pub const PdaBattery: i32 = 1;
        pub const UpsBattery: i32 = 2;
        pub const PrimaryBattery: i32 = 3;
        pub const MouseBattery: i32 = 4;
        pub const KeyboardBattery: i32 = 5;
        pub const KeyboardMouseBattery: i32 = 6;
        pub const CameraBattery: i32 = 7;
        pub const PhoneBattery: i32 = 8;
        pub const MonitorBattery: i32 = 9;
        pub const GamingInputBattery: i32 = 10;
        pub const BluetoothBattery: i32 = 11;
        pub const TabletBattery: i32 = 12;
        pub const HeadphoneBattery: i32 = 13;
        pub const HeadsetBattery: i32 = 14;
        pub const TouchpadBattery: i32 = 15;
    };

    pub const ChargeState = enum(i32) {
        pub const NoCharge: i32 = 0;
        pub const Charging: i32 = 1;
        pub const Discharging: i32 = 2;
        pub const FullyCharged: i32 = 3;
    };

    pub const Technology = enum(i32) {
        pub const UnknownTechnology: i32 = 0;
        pub const LithiumIon: i32 = 1;
        pub const LithiumPolymer: i32 = 2;
        pub const LithiumIronPhosphate: i32 = 3;
        pub const LeadAcid: i32 = 4;
        pub const NickelCadmium: i32 = 5;
        pub const NickelMetalHydride: i32 = 6;
    };
};
