const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpermissions_enums = enums;

/// https://doc.qt.io/qt-6/qpermission.html
pub const qpermission = struct {
    /// New constructs a new QPermission object.
    ///
    ///
    pub fn New() QtC.QPermission {
        return qtc.QPermission_new();
    }

    /// New2 constructs a new QPermission object.
    ///
    /// ``` param1: QtC.QPermission ```
    pub fn New2(param1: ?*anyopaque) QtC.QPermission {
        return qtc.QPermission_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#status)
    ///
    /// ``` self: QtC.QPermission ```
    pub fn Status(self: ?*anyopaque) i64 {
        return qtc.QPermission_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#type)
    ///
    /// ``` self: QtC.QPermission ```
    pub fn Type(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QPermission_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#dtor.QPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlocationpermission.html
pub const qlocationpermission = struct {
    /// New constructs a new QLocationPermission object.
    ///
    ///
    pub fn New() QtC.QLocationPermission {
        return qtc.QLocationPermission_new();
    }

    /// New2 constructs a new QLocationPermission object.
    ///
    /// ``` other: QtC.QLocationPermission ```
    pub fn New2(other: ?*anyopaque) QtC.QLocationPermission {
        return qtc.QLocationPermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#setAccuracy)
    ///
    /// ``` self: QtC.QLocationPermission, accuracy: qpermissions_enums.Accuracy ```
    pub fn SetAccuracy(self: ?*anyopaque, accuracy: i64) void {
        qtc.QLocationPermission_SetAccuracy(@ptrCast(self), @intCast(accuracy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#accuracy)
    ///
    /// ``` self: QtC.QLocationPermission ```
    pub fn Accuracy(self: ?*anyopaque) i64 {
        return qtc.QLocationPermission_Accuracy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#setAvailability)
    ///
    /// ``` self: QtC.QLocationPermission, availability: qpermissions_enums.Availability ```
    pub fn SetAvailability(self: ?*anyopaque, availability: i64) void {
        qtc.QLocationPermission_SetAvailability(@ptrCast(self), @intCast(availability));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#availability)
    ///
    /// ``` self: QtC.QLocationPermission ```
    pub fn Availability(self: ?*anyopaque) i64 {
        return qtc.QLocationPermission_Availability(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#operator=)
    ///
    /// ``` self: QtC.QLocationPermission, other: QtC.QLocationPermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLocationPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#swap)
    ///
    /// ``` self: QtC.QLocationPermission, other: QtC.QLocationPermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLocationPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#dtor.QLocationPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLocationPermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLocationPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendarpermission.html
pub const qcalendarpermission = struct {
    /// New constructs a new QCalendarPermission object.
    ///
    ///
    pub fn New() QtC.QCalendarPermission {
        return qtc.QCalendarPermission_new();
    }

    /// New2 constructs a new QCalendarPermission object.
    ///
    /// ``` other: QtC.QCalendarPermission ```
    pub fn New2(other: ?*anyopaque) QtC.QCalendarPermission {
        return qtc.QCalendarPermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#setAccessMode)
    ///
    /// ``` self: QtC.QCalendarPermission, mode: qpermissions_enums.AccessMode ```
    pub fn SetAccessMode(self: ?*anyopaque, mode: i64) void {
        qtc.QCalendarPermission_SetAccessMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#accessMode)
    ///
    /// ``` self: QtC.QCalendarPermission ```
    pub fn AccessMode(self: ?*anyopaque) i64 {
        return qtc.QCalendarPermission_AccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#operator=)
    ///
    /// ``` self: QtC.QCalendarPermission, other: QtC.QCalendarPermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendarPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#swap)
    ///
    /// ``` self: QtC.QCalendarPermission, other: QtC.QCalendarPermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendarPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#dtor.QCalendarPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCalendarPermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendarPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcontactspermission.html
pub const qcontactspermission = struct {
    /// New constructs a new QContactsPermission object.
    ///
    ///
    pub fn New() QtC.QContactsPermission {
        return qtc.QContactsPermission_new();
    }

    /// New2 constructs a new QContactsPermission object.
    ///
    /// ``` other: QtC.QContactsPermission ```
    pub fn New2(other: ?*anyopaque) QtC.QContactsPermission {
        return qtc.QContactsPermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#setAccessMode)
    ///
    /// ``` self: QtC.QContactsPermission, mode: qpermissions_enums.AccessMode ```
    pub fn SetAccessMode(self: ?*anyopaque, mode: i64) void {
        qtc.QContactsPermission_SetAccessMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#accessMode)
    ///
    /// ``` self: QtC.QContactsPermission ```
    pub fn AccessMode(self: ?*anyopaque) i64 {
        return qtc.QContactsPermission_AccessMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#operator=)
    ///
    /// ``` self: QtC.QContactsPermission, other: QtC.QContactsPermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QContactsPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#swap)
    ///
    /// ``` self: QtC.QContactsPermission, other: QtC.QContactsPermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QContactsPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#dtor.QContactsPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QContactsPermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContactsPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbluetoothpermission.html
pub const qbluetoothpermission = struct {
    /// New constructs a new QBluetoothPermission object.
    ///
    ///
    pub fn New() QtC.QBluetoothPermission {
        return qtc.QBluetoothPermission_new();
    }

    /// New2 constructs a new QBluetoothPermission object.
    ///
    /// ``` other: QtC.QBluetoothPermission ```
    pub fn New2(other: ?*anyopaque) QtC.QBluetoothPermission {
        return qtc.QBluetoothPermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#setCommunicationModes)
    ///
    /// ``` self: QtC.QBluetoothPermission, modes: u8 ```
    pub fn SetCommunicationModes(self: ?*anyopaque, modes: i64) void {
        qtc.QBluetoothPermission_SetCommunicationModes(@ptrCast(self), @intCast(modes));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#communicationModes)
    ///
    /// ``` self: QtC.QBluetoothPermission ```
    pub fn CommunicationModes(self: ?*anyopaque) i64 {
        return qtc.QBluetoothPermission_CommunicationModes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#operator=)
    ///
    /// ``` self: QtC.QBluetoothPermission, other: QtC.QBluetoothPermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#swap)
    ///
    /// ``` self: QtC.QBluetoothPermission, other: QtC.QBluetoothPermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#dtor.QBluetoothPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBluetoothPermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBluetoothPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcamerapermission.html
pub const qcamerapermission = struct {
    /// New constructs a new QCameraPermission object.
    ///
    ///
    pub fn New() QtC.QCameraPermission {
        return qtc.QCameraPermission_new();
    }

    /// New2 constructs a new QCameraPermission object.
    ///
    /// ``` other: QtC.QCameraPermission ```
    pub fn New2(other: ?*anyopaque) QtC.QCameraPermission {
        return qtc.QCameraPermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#operator=)
    ///
    /// ``` self: QtC.QCameraPermission, other: QtC.QCameraPermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#swap)
    ///
    /// ``` self: QtC.QCameraPermission, other: QtC.QCameraPermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#dtor.QCameraPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCameraPermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCameraPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmicrophonepermission.html
pub const qmicrophonepermission = struct {
    /// New constructs a new QMicrophonePermission object.
    ///
    ///
    pub fn New() QtC.QMicrophonePermission {
        return qtc.QMicrophonePermission_new();
    }

    /// New2 constructs a new QMicrophonePermission object.
    ///
    /// ``` other: QtC.QMicrophonePermission ```
    pub fn New2(other: ?*anyopaque) QtC.QMicrophonePermission {
        return qtc.QMicrophonePermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#operator=)
    ///
    /// ``` self: QtC.QMicrophonePermission, other: QtC.QMicrophonePermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMicrophonePermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#swap)
    ///
    /// ``` self: QtC.QMicrophonePermission, other: QtC.QMicrophonePermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMicrophonePermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#dtor.QMicrophonePermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMicrophonePermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMicrophonePermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpermissions.html#types
pub const enums = struct {
    pub const Accuracy = enum {
        pub const Approximate: u8 = 0;
        pub const Precise: u8 = 1;
    };

    pub const Availability = enum {
        pub const WhenInUse: u8 = 0;
        pub const Always: u8 = 1;
    };

    pub const AccessMode = enum {
        pub const ReadOnly: u8 = 0;
        pub const ReadWrite: u8 = 1;
    };

    pub const CommunicationMode = enum {
        pub const Access: u8 = 1;
        pub const Advertise: u8 = 2;
        pub const Default: u8 = 3;
    };
};
