const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlowenergyadvertisingparameters_enums = enums;
const qlowenergycontroller_enums = @import("libqlowenergycontroller.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html)
pub const qlowenergyadvertisingparameters = struct {
    /// New constructs a new QLowEnergyAdvertisingParameters object.
    ///
    pub fn New() QtC.QLowEnergyAdvertisingParameters {
        return qtc.QLowEnergyAdvertisingParameters_new();
    }

    /// New2 constructs a new QLowEnergyAdvertisingParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QLowEnergyAdvertisingParameters `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QLowEnergyAdvertisingParameters {
        return qtc.QLowEnergyAdvertisingParameters_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` other: QtC.QLowEnergyAdvertisingParameters `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingParameters_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` mode: qlowenergyadvertisingparameters_enums.Mode `
    ///
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QLowEnergyAdvertisingParameters_SetMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyadvertisingparameters_enums.Mode `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyAdvertisingParameters_Mode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setWhiteList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` whiteList: []QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` policy: qlowenergyadvertisingparameters_enums.FilterPolicy `
    ///
    pub fn SetWhiteList(self: ?*anyopaque, whiteList: []QtC.QLowEnergyAdvertisingParameters__AddressInfo, policy: i32) void {
        const whiteList_list = qtc.libqt_list{
            .len = whiteList.len,
            .data = @ptrCast(whiteList.ptr),
        };
        qtc.QLowEnergyAdvertisingParameters_SetWhiteList(@ptrCast(self), whiteList_list, @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#whiteList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhiteList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLowEnergyAdvertisingParameters__AddressInfo {
        const _arr: qtc.libqt_list = qtc.QLowEnergyAdvertisingParameters_WhiteList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLowEnergyAdvertisingParameters__AddressInfo, _arr.len) catch @panic("qlowenergyadvertisingparameters.WhiteList: Memory allocation failed");
        const _data: [*]QtC.QLowEnergyAdvertisingParameters__AddressInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#filterPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergyadvertisingparameters_enums.FilterPolicy `
    ///
    pub fn FilterPolicy(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyAdvertisingParameters_FilterPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` minimum: u16 `
    ///
    /// ` maximum: u16 `
    ///
    pub fn SetInterval(self: ?*anyopaque, minimum: u16, maximum: u16) void {
        qtc.QLowEnergyAdvertisingParameters_SetInterval(@ptrCast(self), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#minimumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    pub fn MinimumInterval(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyAdvertisingParameters_MinimumInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#maximumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    pub fn MaximumInterval(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyAdvertisingParameters_MaximumInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    /// ` other: QtC.QLowEnergyAdvertisingParameters `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingParameters_Swap(@ptrCast(self), @ptrCast(other));
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
    /// ` self: QtC.QLowEnergyAdvertisingParameters `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingParameters_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html)
pub const qlowenergyadvertisingparameters__addressinfo = struct {
    /// New constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` addr: QtC.QBluetoothAddress `
    ///
    /// ` t: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn New(addr: ?*anyopaque, t: i32) QtC.QLowEnergyAdvertisingParameters__AddressInfo {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_new(@ptrCast(addr), @bitCast(t));
    }

    /// New2 constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
    ///
    pub fn New2() QtC.QLowEnergyAdvertisingParameters__AddressInfo {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_new2();
    }

    /// New3 constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QLowEnergyAdvertisingParameters__AddressInfo {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn Address(self: ?*anyopaque) QtC.QBluetoothAddress {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_Address(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` address: QtC.QBluetoothAddress `
    ///
    pub fn SetAddress(self: ?*anyopaque, address: QtC.QBluetoothAddress) void {
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_SetAddress(@ptrCast(self), @ptrCast(address));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ## Returns:
    ///
    /// ` qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` type: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_Delete(@ptrCast(self));
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
