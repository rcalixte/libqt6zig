const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaType = @import("libqt6").QMetaType;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpermissions_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html)
pub const QPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPermission,

    pub const _is_QPermission = {};

    /// New constructs a new QPermission object.
    ///
    pub fn New() QPermission {
        return .{ .ptr = qtc.QPermission_new() };
    }

    /// New2 constructs a new QPermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPermission `
    ///
    pub fn New2(param1: anytype) QPermission {
        comptime _ = @TypeOf(param1)._is_QPermission;
        return .{ .ptr = qtc.QPermission_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn Status(self: QPermission) i32 {
        return qtc.QPermission_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPermission `
    ///
    pub fn Type(self: QPermission) QMetaType {
        return .{ .ptr = qtc.QPermission_Type(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpermission.html#dtor.QPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPermission `
    ///
    pub fn Delete(self: QPermission) void {
        qtc.QPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html)
pub const QLocationPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLocationPermission,

    pub const _is_QLocationPermission = {};

    /// New constructs a new QLocationPermission object.
    ///
    pub fn New() QLocationPermission {
        return .{ .ptr = qtc.QLocationPermission_new() };
    }

    /// New2 constructs a new QLocationPermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLocationPermission `
    ///
    pub fn New2(other: anytype) QLocationPermission {
        comptime _ = @TypeOf(other)._is_QLocationPermission;
        return .{ .ptr = qtc.QLocationPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#setAccuracy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` accuracy: qpermissions_enums.Accuracy `
    ///
    pub fn SetAccuracy(self: QLocationPermission, accuracy: u8) void {
        qtc.QLocationPermission_SetAccuracy(@ptrCast(self.ptr), @bitCast(accuracy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#accuracy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.Accuracy `
    ///
    pub fn Accuracy(self: QLocationPermission) u8 {
        return qtc.QLocationPermission_Accuracy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#setAvailability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` availability: qpermissions_enums.Availability `
    ///
    pub fn SetAvailability(self: QLocationPermission, availability: u8) void {
        qtc.QLocationPermission_SetAvailability(@ptrCast(self.ptr), @bitCast(availability));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#availability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.Availability `
    ///
    pub fn Availability(self: QLocationPermission) u8 {
        return qtc.QLocationPermission_Availability(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` other: QLocationPermission `
    ///
    pub fn OperatorAssign(self: QLocationPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLocationPermission;
        qtc.QLocationPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocationPermission `
    ///
    /// ` other: QLocationPermission `
    ///
    pub fn Swap(self: QLocationPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QLocationPermission;
        qtc.QLocationPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocationpermission.html#dtor.QLocationPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLocationPermission `
    ///
    pub fn Delete(self: QLocationPermission) void {
        qtc.QLocationPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html)
pub const QCalendarPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCalendarPermission,

    pub const _is_QCalendarPermission = {};

    /// New constructs a new QCalendarPermission object.
    ///
    pub fn New() QCalendarPermission {
        return .{ .ptr = qtc.QCalendarPermission_new() };
    }

    /// New2 constructs a new QCalendarPermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCalendarPermission `
    ///
    pub fn New2(other: anytype) QCalendarPermission {
        comptime _ = @TypeOf(other)._is_QCalendarPermission;
        return .{ .ptr = qtc.QCalendarPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#setAccessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ` mode: qpermissions_enums.AccessMode `
    ///
    pub fn SetAccessMode(self: QCalendarPermission, mode: u8) void {
        qtc.QCalendarPermission_SetAccessMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.AccessMode `
    ///
    pub fn AccessMode(self: QCalendarPermission) u8 {
        return qtc.QCalendarPermission_AccessMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ` other: QCalendarPermission `
    ///
    pub fn OperatorAssign(self: QCalendarPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCalendarPermission;
        qtc.QCalendarPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCalendarPermission `
    ///
    /// ` other: QCalendarPermission `
    ///
    pub fn Swap(self: QCalendarPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCalendarPermission;
        qtc.QCalendarPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcalendarpermission.html#dtor.QCalendarPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCalendarPermission `
    ///
    pub fn Delete(self: QCalendarPermission) void {
        qtc.QCalendarPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html)
pub const QContactsPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QContactsPermission,

    pub const _is_QContactsPermission = {};

    /// New constructs a new QContactsPermission object.
    ///
    pub fn New() QContactsPermission {
        return .{ .ptr = qtc.QContactsPermission_new() };
    }

    /// New2 constructs a new QContactsPermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QContactsPermission `
    ///
    pub fn New2(other: anytype) QContactsPermission {
        comptime _ = @TypeOf(other)._is_QContactsPermission;
        return .{ .ptr = qtc.QContactsPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#setAccessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ` mode: qpermissions_enums.AccessMode `
    ///
    pub fn SetAccessMode(self: QContactsPermission, mode: u8) void {
        qtc.QContactsPermission_SetAccessMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#accessMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ## Returns:
    ///
    /// ` qpermissions_enums.AccessMode `
    ///
    pub fn AccessMode(self: QContactsPermission) u8 {
        return qtc.QContactsPermission_AccessMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ` other: QContactsPermission `
    ///
    pub fn OperatorAssign(self: QContactsPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QContactsPermission;
        qtc.QContactsPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QContactsPermission `
    ///
    /// ` other: QContactsPermission `
    ///
    pub fn Swap(self: QContactsPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QContactsPermission;
        qtc.QContactsPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontactspermission.html#dtor.QContactsPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QContactsPermission `
    ///
    pub fn Delete(self: QContactsPermission) void {
        qtc.QContactsPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html)
pub const QBluetoothPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothPermission,

    pub const _is_QBluetoothPermission = {};

    /// New constructs a new QBluetoothPermission object.
    ///
    pub fn New() QBluetoothPermission {
        return .{ .ptr = qtc.QBluetoothPermission_new() };
    }

    /// New2 constructs a new QBluetoothPermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothPermission `
    ///
    pub fn New2(other: anytype) QBluetoothPermission {
        comptime _ = @TypeOf(other)._is_QBluetoothPermission;
        return .{ .ptr = qtc.QBluetoothPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#setCommunicationModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ` modes: flag of qpermissions_enums.CommunicationMode `
    ///
    pub fn SetCommunicationModes(self: QBluetoothPermission, modes: u8) void {
        qtc.QBluetoothPermission_SetCommunicationModes(@ptrCast(self.ptr), @bitCast(modes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#communicationModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpermissions_enums.CommunicationMode `
    ///
    pub fn CommunicationModes(self: QBluetoothPermission) u8 {
        return qtc.QBluetoothPermission_CommunicationModes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ` other: QBluetoothPermission `
    ///
    pub fn OperatorAssign(self: QBluetoothPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothPermission;
        qtc.QBluetoothPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothPermission `
    ///
    /// ` other: QBluetoothPermission `
    ///
    pub fn Swap(self: QBluetoothPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothPermission;
        qtc.QBluetoothPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothpermission.html#dtor.QBluetoothPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothPermission `
    ///
    pub fn Delete(self: QBluetoothPermission) void {
        qtc.QBluetoothPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html)
pub const QCameraPermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCameraPermission,

    pub const _is_QCameraPermission = {};

    /// New constructs a new QCameraPermission object.
    ///
    pub fn New() QCameraPermission {
        return .{ .ptr = qtc.QCameraPermission_new() };
    }

    /// New2 constructs a new QCameraPermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCameraPermission `
    ///
    pub fn New2(other: anytype) QCameraPermission {
        comptime _ = @TypeOf(other)._is_QCameraPermission;
        return .{ .ptr = qtc.QCameraPermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraPermission `
    ///
    /// ` other: QCameraPermission `
    ///
    pub fn OperatorAssign(self: QCameraPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCameraPermission;
        qtc.QCameraPermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraPermission `
    ///
    /// ` other: QCameraPermission `
    ///
    pub fn Swap(self: QCameraPermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCameraPermission;
        qtc.QCameraPermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcamerapermission.html#dtor.QCameraPermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCameraPermission `
    ///
    pub fn Delete(self: QCameraPermission) void {
        qtc.QCameraPermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html)
pub const QMicrophonePermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMicrophonePermission,

    pub const _is_QMicrophonePermission = {};

    /// New constructs a new QMicrophonePermission object.
    ///
    pub fn New() QMicrophonePermission {
        return .{ .ptr = qtc.QMicrophonePermission_new() };
    }

    /// New2 constructs a new QMicrophonePermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMicrophonePermission `
    ///
    pub fn New2(other: anytype) QMicrophonePermission {
        comptime _ = @TypeOf(other)._is_QMicrophonePermission;
        return .{ .ptr = qtc.QMicrophonePermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMicrophonePermission `
    ///
    /// ` other: QMicrophonePermission `
    ///
    pub fn OperatorAssign(self: QMicrophonePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMicrophonePermission;
        qtc.QMicrophonePermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMicrophonePermission `
    ///
    /// ` other: QMicrophonePermission `
    ///
    pub fn Swap(self: QMicrophonePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMicrophonePermission;
        qtc.QMicrophonePermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmicrophonepermission.html#dtor.QMicrophonePermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMicrophonePermission `
    ///
    pub fn Delete(self: QMicrophonePermission) void {
        qtc.QMicrophonePermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpermissions.html#public-types)
pub const enums = struct {
    pub const Accuracy = enum(u8) {
        pub const Approximate: u8 = 0;
        pub const Precise: u8 = 1;
    };

    pub const Availability = enum(u8) {
        pub const WhenInUse: u8 = 0;
        pub const Always: u8 = 1;
    };

    pub const AccessMode = enum(u8) {
        pub const ReadOnly: u8 = 0;
        pub const ReadWrite: u8 = 1;
    };

    pub const CommunicationMode = enum(u8) {
        pub const Access: u8 = 1;
        pub const Advertise: u8 = 2;
        pub const Default: u8 = 3;
    };
};
