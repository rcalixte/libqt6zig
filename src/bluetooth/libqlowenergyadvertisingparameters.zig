const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const qlowenergyadvertisingparameters_enums = enums;
const qlowenergycontroller_enums = @import("libqlowenergycontroller.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html)
pub const QLowEnergyAdvertisingParameters = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyAdvertisingParameters,

    pub const _is_QLowEnergyAdvertisingParameters = {};

    /// New constructs a new QLowEnergyAdvertisingParameters object.
    ///
    pub fn New() QLowEnergyAdvertisingParameters {
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters_new() };
    }

    /// New2 constructs a new QLowEnergyAdvertisingParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyAdvertisingParameters `
    ///
    pub fn New2(other: anytype) QLowEnergyAdvertisingParameters {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingParameters;
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` other: QLowEnergyAdvertisingParameters `
    ///
    pub fn OperatorAssign(self: QLowEnergyAdvertisingParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingParameters;
        qtc.QLowEnergyAdvertisingParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` mode: qlowenergyadvertisingparameters_enums.Mode `
    ///
    pub fn SetMode(self: QLowEnergyAdvertisingParameters, mode: i32) void {
        qtc.QLowEnergyAdvertisingParameters_SetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyadvertisingparameters_enums.Mode `
    ///
    pub fn Mode(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setWhiteList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` whiteList: []QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` policy: qlowenergyadvertisingparameters_enums.FilterPolicy `
    ///
    pub fn SetWhiteList(self: QLowEnergyAdvertisingParameters, whiteList: []QLowEnergyAdvertisingParameters__AddressInfo, policy: i32) void {
        const whiteList_list = qtc.libqt_list{
            .len = whiteList.len,
            .data = @ptrCast(whiteList.ptr),
        };
        qtc.QLowEnergyAdvertisingParameters_SetWhiteList(@ptrCast(self.ptr), whiteList_list, @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#whiteList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhiteList(self: QLowEnergyAdvertisingParameters, allocator: std.mem.Allocator) []QLowEnergyAdvertisingParameters__AddressInfo {
        const _arr: qtc.libqt_list = qtc.QLowEnergyAdvertisingParameters_WhiteList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyAdvertisingParameters__AddressInfo, _arr.len) catch @panic("qlowenergyadvertisingparameters.WhiteList: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyAdvertisingParameters__AddressInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#filterPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyadvertisingparameters_enums.FilterPolicy `
    ///
    pub fn FilterPolicy(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_FilterPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` minimum: u16 `
    ///
    /// ` maximum: u16 `
    ///
    pub fn SetInterval(self: QLowEnergyAdvertisingParameters, minimum: u16, maximum: u16) void {
        qtc.QLowEnergyAdvertisingParameters_SetInterval(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#minimumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    pub fn MinimumInterval(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_MinimumInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#maximumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    pub fn MaximumInterval(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_MaximumInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` other: QLowEnergyAdvertisingParameters `
    ///
    pub fn Swap(self: QLowEnergyAdvertisingParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingParameters;
        qtc.QLowEnergyAdvertisingParameters_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#dtor.QLowEnergyAdvertisingParameters)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    pub fn Delete(self: QLowEnergyAdvertisingParameters) void {
        qtc.QLowEnergyAdvertisingParameters_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html)
pub const QLowEnergyAdvertisingParameters__AddressInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLowEnergyAdvertisingParameters__AddressInfo,

    pub const _is_QLowEnergyAdvertisingParameters__AddressInfo = {};

    /// New constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` addr: QBluetoothAddress `
    ///
    /// ` t: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn New(addr: anytype, t: i32) QLowEnergyAdvertisingParameters__AddressInfo {
        comptime _ = @TypeOf(addr)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_new(@ptrCast(addr.ptr), @bitCast(t)) };
    }

    /// New2 constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
    ///
    pub fn New2() QLowEnergyAdvertisingParameters__AddressInfo {
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_new2() };
    }

    /// New3 constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn New3(param1: anytype) QLowEnergyAdvertisingParameters__AddressInfo {
        comptime _ = @TypeOf(param1)._is_QLowEnergyAdvertisingParameters__AddressInfo;
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn Address(self: QLowEnergyAdvertisingParameters__AddressInfo) QBluetoothAddress {
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_Address(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn SetAddress(self: QLowEnergyAdvertisingParameters__AddressInfo, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_SetAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn Type(self: QLowEnergyAdvertisingParameters__AddressInfo) i32 {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` type: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn SetType(self: QLowEnergyAdvertisingParameters__AddressInfo, _type: i32) void {
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn Delete(self: QLowEnergyAdvertisingParameters__AddressInfo) void {
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const AdvInd: i32 = 0;
        pub const AdvScanInd: i32 = 2;
        pub const AdvNonConnInd: i32 = 3;
    };

    pub const FilterPolicy = enum(i32) {
        pub const IgnoreWhiteList: i32 = 0;
        pub const UseWhiteListForScanning: i32 = 1;
        pub const UseWhiteListForConnecting: i32 = 2;
        pub const UseWhiteListForScanningAndConnecting: i32 = 3;
    };
};
