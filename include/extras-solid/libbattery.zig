const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const battery_enums = enums;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/solid-battery.html)
pub const Solid__Battery = extern struct {
    /// ### [Upstream resources](https://api.kde.org/solid-battery.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Solid__Battery,

    pub const _is_Solid__Battery = {};
    pub const _is_Solid__DeviceInterface = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn MetaObject(self: Solid__Battery) QMetaObject {
        return .{ .ptr = qtc.Solid__Battery_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Solid__Battery, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Solid__Battery_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Solid__Battery, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Solid__Battery_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
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
    /// ` self: Solid__Battery `
    ///
    pub fn IsPresent(self: Solid__Battery) bool {
        return qtc.Solid__Battery_IsPresent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ## Returns:
    ///
    /// ` battery_enums.BatteryType `
    ///
    pub fn Type(self: Solid__Battery) i32 {
        return qtc.Solid__Battery_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargePercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn ChargePercent(self: Solid__Battery) i32 {
        return qtc.Solid__Battery_ChargePercent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#capacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Capacity(self: Solid__Battery) i32 {
        return qtc.Solid__Battery_Capacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#cycleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn CycleCount(self: Solid__Battery) i32 {
        return qtc.Solid__Battery_CycleCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#isRechargeable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn IsRechargeable(self: Solid__Battery) bool {
        return qtc.Solid__Battery_IsRechargeable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#isPowerSupply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn IsPowerSupply(self: Solid__Battery) bool {
        return qtc.Solid__Battery_IsPowerSupply(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ## Returns:
    ///
    /// ` battery_enums.ChargeState `
    ///
    pub fn ChargeState(self: Solid__Battery) i32 {
        return qtc.Solid__Battery_ChargeState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn TimeToEmpty(self: Solid__Battery) isize {
        return qtc.Solid__Battery_TimeToEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn TimeToFull(self: Solid__Battery) isize {
        return qtc.Solid__Battery_TimeToFull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#technology)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ## Returns:
    ///
    /// ` battery_enums.Technology `
    ///
    pub fn Technology(self: Solid__Battery) i32 {
        return qtc.Solid__Battery_Technology(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Energy(self: Solid__Battery) f64 {
        return qtc.Solid__Battery_Energy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn EnergyFull(self: Solid__Battery) f64 {
        return qtc.Solid__Battery_EnergyFull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesign)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn EnergyFullDesign(self: Solid__Battery) f64 {
        return qtc.Solid__Battery_EnergyFullDesign(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn EnergyRate(self: Solid__Battery) f64 {
        return qtc.Solid__Battery_EnergyRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#voltage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Voltage(self: Solid__Battery) f64 {
        return qtc.Solid__Battery_Voltage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#temperature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Temperature(self: Solid__Battery) f64 {
        return qtc.Solid__Battery_Temperature(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#serial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Serial(self: Solid__Battery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Battery_Serial(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__battery.Serial: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn RemainingTime(self: Solid__Battery) isize {
        return qtc.Solid__Battery_RemainingTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#presentStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` newState: bool `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn PresentStateChanged(self: Solid__Battery, newState: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_PresentStateChanged(@ptrCast(self.ptr), newState, udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#presentStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, newState: bool, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPresentStateChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_PresentStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargePercentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` value: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ChargePercentChanged(self: Solid__Battery, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_ChargePercentChanged(@ptrCast(self.ptr), @bitCast(value), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargePercentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnChargePercentChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargePercentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#capacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` value: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CapacityChanged(self: Solid__Battery, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_CapacityChanged(@ptrCast(self.ptr), @bitCast(value), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#capacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCapacityChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_CapacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#cycleCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` value: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn CycleCountChanged(self: Solid__Battery, value: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_CycleCountChanged(@ptrCast(self.ptr), @bitCast(value), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#cycleCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, value: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCycleCountChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_CycleCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` newState: bool `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn PowerSupplyStateChanged(self: Solid__Battery, newState: bool, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_PowerSupplyStateChanged(@ptrCast(self.ptr), newState, udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#powerSupplyStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, newState: bool, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPowerSupplyStateChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, bool, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_PowerSupplyStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` newState: i32 `
    ///
    pub fn ChargeStateChanged(self: Solid__Battery, newState: i32) void {
        qtc.Solid__Battery_ChargeStateChanged(@ptrCast(self.ptr), @bitCast(newState));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, newState: i32) callconv(.c) void `
    ///
    pub fn OnChargeStateChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, i32) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargeStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` time: isize `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TimeToEmptyChanged(self: Solid__Battery, time: isize, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TimeToEmptyChanged(@ptrCast(self.ptr), @bitCast(time), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToEmptyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, time: isize, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTimeToEmptyChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, isize, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TimeToEmptyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToFullChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` time: isize `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TimeToFullChanged(self: Solid__Battery, time: isize, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TimeToFullChanged(@ptrCast(self.ptr), @bitCast(time), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#timeToFullChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, time: isize, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTimeToFullChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, isize, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TimeToFullChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` energy: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyChanged(self: Solid__Battery, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyChanged(@ptrCast(self.ptr), @bitCast(energy), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` energy: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyFullChanged(self: Solid__Battery, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyFullChanged(@ptrCast(self.ptr), @bitCast(energy), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyFullChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyFullChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` energy: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyFullDesignChanged(self: Solid__Battery, energy: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyFullDesignChanged(@ptrCast(self.ptr), @bitCast(energy), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyFullDesignChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, energy: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyFullDesignChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyFullDesignChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` energyRate: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn EnergyRateChanged(self: Solid__Battery, energyRate: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_EnergyRateChanged(@ptrCast(self.ptr), @bitCast(energyRate), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#energyRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, energyRate: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEnergyRateChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_EnergyRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#voltageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` voltage: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn VoltageChanged(self: Solid__Battery, voltage: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_VoltageChanged(@ptrCast(self.ptr), @bitCast(voltage), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#voltageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, voltage: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnVoltageChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_VoltageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#temperatureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` temperature: f64 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn TemperatureChanged(self: Solid__Battery, temperature: f64, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_TemperatureChanged(@ptrCast(self.ptr), @bitCast(temperature), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#temperatureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, temperature: f64, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTemperatureChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, f64, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_TemperatureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#remainingTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` time: isize `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn RemainingTimeChanged(self: Solid__Battery, time: isize, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_RemainingTimeChanged(@ptrCast(self.ptr), @bitCast(time), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#remainingTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, time: isize, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemainingTimeChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, isize, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_RemainingTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
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
    /// ` self: Solid__Battery `
    ///
    /// ` newState: i32 `
    ///
    /// ` udi: []const u8 `
    ///
    pub fn ChargeStateChanged2(self: Solid__Battery, newState: i32, udi: []const u8) void {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        qtc.Solid__Battery_ChargeStateChanged2(@ptrCast(self.ptr), @bitCast(newState), udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-battery.html#chargeStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, newState: i32, udi: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnChargeStateChanged2(self: Solid__Battery, callback: *const fn (Solid__Battery, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.Solid__Battery_Connect_ChargeStateChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn IsValid(self: Solid__Battery) bool {
        return qtc.Solid__DeviceInterface_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from Solid::DeviceInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    pub fn TypeToString(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: deviceinterface_enums.Type `
    ///
    pub fn TypeDescription(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
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
    /// ` self: Solid__Battery `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Solid__Battery, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Solid__Battery, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Solid__Battery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: Solid__Battery `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Solid__Battery, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn IsWidgetType(self: Solid__Battery) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn IsWindowType(self: Solid__Battery) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn IsQuickItemType(self: Solid__Battery) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn SignalsBlocked(self: Solid__Battery) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Solid__Battery, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Thread(self: Solid__Battery) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Solid__Battery, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Solid__Battery, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Solid__Battery, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Solid__Battery, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Solid__Battery, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Solid__Battery, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("solid__battery.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Solid__Battery, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Solid__Battery, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Solid__Battery, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Solid__Battery, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Disconnect3(self: Solid__Battery) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Solid__Battery, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn DumpObjectTree(self: Solid__Battery) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn DumpObjectInfo(self: Solid__Battery) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Solid__Battery, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Solid__Battery, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Solid__Battery, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Solid__Battery `
    ///
    pub fn BindingStorage(self: Solid__Battery) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn BindingStorage2(self: Solid__Battery) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Destroyed(self: Solid__Battery) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Solid__Battery, callback: *const fn (Solid__Battery) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Parent(self: Solid__Battery) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Solid__Battery, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn DeleteLater(self: Solid__Battery) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Solid__Battery, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Solid__Battery, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Solid__Battery, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Solid__Battery, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Solid__Battery, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Solid__Battery, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Solid__Battery, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Solid__Battery, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Solid__Battery, callback: *const fn (Solid__Battery, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Solid__Battery `
    ///
    /// ` callback: *const fn (self: Solid__Battery, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Solid__Battery, callback: *const fn (Solid__Battery, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__Battery `
    ///
    pub fn Delete(self: Solid__Battery) void {
        qtc.Solid__Battery_Delete(@ptrCast(self.ptr));
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
