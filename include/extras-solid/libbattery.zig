const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const battery_enums = enums;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/solid-battery.html
pub const solid__battery = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Solid__Battery_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Solid__Battery, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__Battery_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Solid__Battery, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Solid__Battery_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#deviceInterfaceType)
    ///
    ///
    ///
    /// Returns: ``` deviceinterface_enums.Type ```
    pub fn DeviceInterfaceType() i32 {
        return qtc.Solid__Battery_DeviceInterfaceType();
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#isPresent)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsPresent(self: ?*anyopaque) bool {
        return qtc.Solid__Battery_IsPresent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#type)
    ///
    /// ``` self: QtC.Solid__Battery ```
    ///
    /// Returns: ``` battery_enums.BatteryType ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargePercent)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn ChargePercent(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_ChargePercent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#capacity)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Capacity(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Capacity(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#cycleCount)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn CycleCount(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_CycleCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#isRechargeable)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsRechargeable(self: ?*anyopaque) bool {
        return qtc.Solid__Battery_IsRechargeable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#isPowerSupply)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsPowerSupply(self: ?*anyopaque) bool {
        return qtc.Solid__Battery_IsPowerSupply(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargeState)
    ///
    /// ``` self: QtC.Solid__Battery ```
    ///
    /// Returns: ``` battery_enums.ChargeState ```
    pub fn ChargeState(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_ChargeState(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#timeToEmpty)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn TimeToEmpty(self: ?*anyopaque) i64 {
        return qtc.Solid__Battery_TimeToEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#timeToFull)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn TimeToFull(self: ?*anyopaque) i64 {
        return qtc.Solid__Battery_TimeToFull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#technology)
    ///
    /// ``` self: QtC.Solid__Battery ```
    ///
    /// Returns: ``` battery_enums.Technology ```
    pub fn Technology(self: ?*anyopaque) i32 {
        return qtc.Solid__Battery_Technology(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energy)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Energy(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_Energy(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyFull)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn EnergyFull(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_EnergyFull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyFullDesign)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn EnergyFullDesign(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_EnergyFullDesign(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyRate)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn EnergyRate(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_EnergyRate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#voltage)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Voltage(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_Voltage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#temperature)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Temperature(self: ?*anyopaque) f64 {
        return qtc.Solid__Battery_Temperature(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#serial)
    ///
    /// ``` self: QtC.Solid__Battery, allocator: std.mem.Allocator ```
    pub fn Serial(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__Battery_Serial(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.Serial: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#remainingTime)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn RemainingTime(self: ?*anyopaque) i64 {
        return qtc.Solid__Battery_RemainingTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#presentStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, newState: bool, udi: []const u8 ```
    pub fn PresentStateChanged(self: ?*anyopaque, newState: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_PresentStateChanged(@ptrCast(self), newState, udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#presentStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, newState: bool, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnPresentStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_PresentStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargePercentChanged)
    ///
    /// ``` self: QtC.Solid__Battery, value: i32, udi: []const u8 ```
    pub fn ChargePercentChanged(self: ?*anyopaque, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_ChargePercentChanged(@ptrCast(self), @intCast(value), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargePercentChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnChargePercentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargePercentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#capacityChanged)
    ///
    /// ``` self: QtC.Solid__Battery, value: i32, udi: []const u8 ```
    pub fn CapacityChanged(self: ?*anyopaque, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_CapacityChanged(@ptrCast(self), @intCast(value), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#capacityChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnCapacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_CapacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#cycleCountChanged)
    ///
    /// ``` self: QtC.Solid__Battery, value: i32, udi: []const u8 ```
    pub fn CycleCountChanged(self: ?*anyopaque, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_CycleCountChanged(@ptrCast(self), @intCast(value), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#cycleCountChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnCycleCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_CycleCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, newState: bool, udi: []const u8 ```
    pub fn PowerSupplyStateChanged(self: ?*anyopaque, newState: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_PowerSupplyStateChanged(@ptrCast(self), newState, udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, newState: bool, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnPowerSupplyStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_PowerSupplyStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, newState: i32 ```
    pub fn ChargeStateChanged(self: ?*anyopaque, newState: i32) void {
        qtc.Solid__Battery_ChargeStateChanged(@ptrCast(self), @intCast(newState));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, newState: i32) callconv(.c) void ```
    pub fn OnChargeStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargeStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
    ///
    /// ``` self: QtC.Solid__Battery, time: i64, udi: []const u8 ```
    pub fn TimeToEmptyChanged(self: ?*anyopaque, time: i64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TimeToEmptyChanged(@ptrCast(self), @intCast(time), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, time: i64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnTimeToEmptyChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TimeToEmptyChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#timeToFullChanged)
    ///
    /// ``` self: QtC.Solid__Battery, time: i64, udi: []const u8 ```
    pub fn TimeToFullChanged(self: ?*anyopaque, time: i64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TimeToFullChanged(@ptrCast(self), @intCast(time), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#timeToFullChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, time: i64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnTimeToFullChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TimeToFullChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyChanged)
    ///
    /// ``` self: QtC.Solid__Battery, energy: f64, udi: []const u8 ```
    pub fn EnergyChanged(self: ?*anyopaque, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyChanged(@ptrCast(self), @floatCast(energy), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnEnergyChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyFullChanged)
    ///
    /// ``` self: QtC.Solid__Battery, energy: f64, udi: []const u8 ```
    pub fn EnergyFullChanged(self: ?*anyopaque, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyFullChanged(@ptrCast(self), @floatCast(energy), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyFullChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnEnergyFullChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyFullChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
    ///
    /// ``` self: QtC.Solid__Battery, energy: f64, udi: []const u8 ```
    pub fn EnergyFullDesignChanged(self: ?*anyopaque, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyFullDesignChanged(@ptrCast(self), @floatCast(energy), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnEnergyFullDesignChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyFullDesignChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyRateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, energyRate: f64, udi: []const u8 ```
    pub fn EnergyRateChanged(self: ?*anyopaque, energyRate: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyRateChanged(@ptrCast(self), @floatCast(energyRate), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#energyRateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, energyRate: f64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnEnergyRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#voltageChanged)
    ///
    /// ``` self: QtC.Solid__Battery, voltage: f64, udi: []const u8 ```
    pub fn VoltageChanged(self: ?*anyopaque, voltage: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_VoltageChanged(@ptrCast(self), @floatCast(voltage), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#voltageChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, voltage: f64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnVoltageChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_VoltageChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#temperatureChanged)
    ///
    /// ``` self: QtC.Solid__Battery, temperature: f64, udi: []const u8 ```
    pub fn TemperatureChanged(self: ?*anyopaque, temperature: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TemperatureChanged(@ptrCast(self), @floatCast(temperature), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#temperatureChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, temperature: f64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnTemperatureChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TemperatureChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#remainingTimeChanged)
    ///
    /// ``` self: QtC.Solid__Battery, time: i64, udi: []const u8 ```
    pub fn RemainingTimeChanged(self: ?*anyopaque, time: i64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_RemainingTimeChanged(@ptrCast(self), @intCast(time), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#remainingTimeChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, time: i64, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnRemainingTimeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_RemainingTimeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Solid__Battery_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Solid__Battery_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, newState: i32, udi: []const u8 ```
    pub fn ChargeStateChanged2(self: ?*anyopaque, newState: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_ChargeStateChanged2(@ptrCast(self), @intCast(newState), udi_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, newState: i32, udi: [*:0]const u8) callconv(.c) void ```
    pub fn OnChargeStateChanged2(self: ?*anyopaque, slot: fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargeStateChanged2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ``` typeVal: deviceinterface_enums.Type, allocator: std.mem.Allocator ```
    pub fn TypeToString(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__DeviceInterface_TypeToString(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.TypeToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#stringToType)
    ///
    /// ``` typeVal: []const u8 ```
    ///
    /// Returns: ``` deviceinterface_enums.Type ```
    pub fn StringToType(typeVal: []const u8) i32 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.Solid__DeviceInterface_StringToType(typeVal_str);
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeDescription)
    ///
    /// ``` typeVal: deviceinterface_enums.Type, allocator: std.mem.Allocator ```
    pub fn TypeDescription(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__DeviceInterface_TypeDescription(@intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.TypeDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.Solid__Battery, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.Solid__Battery, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Solid__Battery, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::battery.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Solid__Battery, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Solid__Battery, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Solid__Battery, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Solid__Battery, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Solid__Battery, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Solid__Battery, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Solid__Battery, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("solid::battery.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Solid__Battery, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Solid__Battery, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Solid__Battery, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Solid__Battery, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Solid__Battery, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Solid__Battery, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Solid__Battery, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("solid::battery.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("solid::battery.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Solid__Battery, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Solid__Battery, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Solid__Battery, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Solid__Battery, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__Battery, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Solid__Battery, slot: fn (self: QtC.Solid__Battery, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Solid__Battery ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Solid__Battery_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/solid-battery.html#types
pub const enums = struct {
    pub const BatteryType = enum {
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

    pub const ChargeState = enum {
        pub const NoCharge: i32 = 0;
        pub const Charging: i32 = 1;
        pub const Discharging: i32 = 2;
        pub const FullyCharged: i32 = 3;
    };

    pub const Technology = enum {
        pub const UnknownTechnology: i32 = 0;
        pub const LithiumIon: i32 = 1;
        pub const LithiumPolymer: i32 = 2;
        pub const LithiumIronPhosphate: i32 = 3;
        pub const LeadAcid: i32 = 4;
        pub const NickelCadmium: i32 = 5;
        pub const NickelMetalHydride: i32 = 6;
    };
};
