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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyAdvertisingParameters object in C++ memory
    ///
    pub fn new() QLowEnergyAdvertisingParameters {
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyAdvertisingParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLowEnergyAdvertisingParameters `
    ///
    pub fn new2(other: anytype) QLowEnergyAdvertisingParameters {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingParameters;
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` other: QLowEnergyAdvertisingParameters `
    ///
    pub fn operatorAssign(self: QLowEnergyAdvertisingParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingParameters;
        qtc.QLowEnergyAdvertisingParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` _mode: qlowenergyadvertisingparameters_enums.Mode `
    ///
    pub fn setMode(self: QLowEnergyAdvertisingParameters, _mode: i32) void {
        qtc.QLowEnergyAdvertisingParameters_SetMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWhiteList` instead
    ///
    pub const SetWhiteList = setWhiteList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setWhiteList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` _whiteList: []QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` policy: qlowenergyadvertisingparameters_enums.FilterPolicy `
    ///
    pub fn setWhiteList(self: QLowEnergyAdvertisingParameters, _whiteList: []QLowEnergyAdvertisingParameters__AddressInfo, policy: i32) void {
        const whiteList_list = qtc.libqt_list{
            .len = _whiteList.len,
            .data = @ptrCast(_whiteList.ptr),
        };
        qtc.QLowEnergyAdvertisingParameters_SetWhiteList(@ptrCast(self.ptr), whiteList_list, @bitCast(policy));
    }

    /// ### DEPRECATED: Use `whiteList` instead
    ///
    pub const WhiteList = whiteList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#whiteList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whiteList(self: QLowEnergyAdvertisingParameters, allocator: std.mem.Allocator) []QLowEnergyAdvertisingParameters__AddressInfo {
        const _arr: qtc.libqt_list = qtc.QLowEnergyAdvertisingParameters_WhiteList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLowEnergyAdvertisingParameters__AddressInfo, _arr.len) catch @panic("QLowEnergyAdvertisingParameters.whiteList: Memory allocation failed");
        const _data_val: [*]QtC.QLowEnergyAdvertisingParameters__AddressInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `filterPolicy` instead
    ///
    pub const FilterPolicy = filterPolicy;

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
    pub fn filterPolicy(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_FilterPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterval` instead
    ///
    pub const SetInterval = setInterval;

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
    pub fn setInterval(self: QLowEnergyAdvertisingParameters, minimum: u16, maximum: u16) void {
        qtc.QLowEnergyAdvertisingParameters_SetInterval(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `minimumInterval` instead
    ///
    pub const MinimumInterval = minimumInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#minimumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    pub fn minimumInterval(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_MinimumInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumInterval` instead
    ///
    pub const MaximumInterval = maximumInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#maximumInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    pub fn maximumInterval(self: QLowEnergyAdvertisingParameters) i32 {
        return qtc.QLowEnergyAdvertisingParameters_MaximumInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    /// ` other: QLowEnergyAdvertisingParameters `
    ///
    pub fn swap(self: QLowEnergyAdvertisingParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLowEnergyAdvertisingParameters;
        qtc.QLowEnergyAdvertisingParameters_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#dtor.QLowEnergyAdvertisingParameters)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyAdvertisingParameters `
    ///
    pub fn delete(self: QLowEnergyAdvertisingParameters) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLowEnergyAdvertisingParameters::AddressInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` addr: QBluetoothAddress `
    ///
    /// ` t: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn new(addr: anytype, t: i32) QLowEnergyAdvertisingParameters__AddressInfo {
        comptime _ = @TypeOf(addr)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_new(@ptrCast(addr.ptr), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLowEnergyAdvertisingParameters::AddressInfo object in C++ memory
    ///
    pub fn new2() QLowEnergyAdvertisingParameters__AddressInfo {
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLowEnergyAdvertisingParameters::AddressInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn new3(param1: anytype) QLowEnergyAdvertisingParameters__AddressInfo {
        comptime _ = @TypeOf(param1)._is_QLowEnergyAdvertisingParameters__AddressInfo;
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `address` instead
    ///
    pub const Address = address;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn address(self: QLowEnergyAdvertisingParameters__AddressInfo) QBluetoothAddress {
        return .{ .ptr = qtc.QLowEnergyAdvertisingParameters__AddressInfo_Address(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAddress` instead
    ///
    pub const SetAddress = setAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` _address: QBluetoothAddress `
    ///
    pub fn setAddress(self: QLowEnergyAdvertisingParameters__AddressInfo, _address: anytype) void {
        comptime _ = @TypeOf(_address)._is_QBluetoothAddress;
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_SetAddress(@ptrCast(self.ptr), @ptrCast(_address.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QLowEnergyAdvertisingParameters__AddressInfo) i32 {
        return qtc.QLowEnergyAdvertisingParameters__AddressInfo_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    /// ` _type: qlowenergycontroller_enums.RemoteAddressType `
    ///
    pub fn setType(self: QLowEnergyAdvertisingParameters__AddressInfo, _type: i32) void {
        qtc.QLowEnergyAdvertisingParameters__AddressInfo_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLowEnergyAdvertisingParameters__AddressInfo `
    ///
    pub fn delete(self: QLowEnergyAdvertisingParameters__AddressInfo) void {
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
